#include <cassert>
#include <cstdint>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <optional>
#include <string>
#include <vector>

enum class Side {
    Buy,
    Sell,
};

struct Order {
    std::uint64_t id{};
    Side side{};
    int price{};
    int quantity{};
};

struct Trade {
    std::uint64_t resting_order_id{};
    std::uint64_t incoming_order_id{};
    int price{};
    int quantity{};
};

class OrderBook {
public:
    std::vector<Trade> add_limit(Order order) {
        std::vector<Trade> trades;

        if (order.side == Side::Buy) {
            match_buy(order, trades);
            if (order.quantity > 0) {
                bids_[order.price].push_back(order);
            }
        } else {
            match_sell(order, trades);
            if (order.quantity > 0) {
                asks_[order.price].push_back(order);
            }
        }

        return trades;
    }

    bool cancel(std::uint64_t order_id) {
        return cancel_from(bids_, order_id) || cancel_from(asks_, order_id);
    }

    std::optional<int> best_bid() const {
        if (bids_.empty()) {
            return std::nullopt;
        }
        return bids_.begin()->first;
    }

    std::optional<int> best_ask() const {
        if (asks_.empty()) {
            return std::nullopt;
        }
        return asks_.begin()->first;
    }

private:
    using BidBook = std::map<int, std::deque<Order>, std::greater<int>>;
    using AskBook = std::map<int, std::deque<Order>>;

    void match_buy(Order& incoming, std::vector<Trade>& trades) {
        while (incoming.quantity > 0 && !asks_.empty()) {
            auto best = asks_.begin();
            if (best->first > incoming.price) {
                return;
            }

            consume_level(incoming, best->second, best->first, trades);
            if (best->second.empty()) {
                asks_.erase(best);
            }
        }
    }

    void match_sell(Order& incoming, std::vector<Trade>& trades) {
        while (incoming.quantity > 0 && !bids_.empty()) {
            auto best = bids_.begin();
            if (best->first < incoming.price) {
                return;
            }

            consume_level(incoming, best->second, best->first, trades);
            if (best->second.empty()) {
                bids_.erase(best);
            }
        }
    }

    static void consume_level(Order& incoming, std::deque<Order>& level, int price, std::vector<Trade>& trades) {
        while (incoming.quantity > 0 && !level.empty()) {
            auto& resting = level.front();
            const int traded = std::min(incoming.quantity, resting.quantity);

            trades.push_back(Trade{
                resting.id,
                incoming.id,
                price,
                traded,
            });

            incoming.quantity -= traded;
            resting.quantity -= traded;

            if (resting.quantity == 0) {
                level.pop_front();
            }
        }
    }

    template <typename Book>
    static bool cancel_from(Book& book, std::uint64_t order_id) {
        for (auto level_it = book.begin(); level_it != book.end(); ++level_it) {
            auto& orders = level_it->second;
            for (auto order_it = orders.begin(); order_it != orders.end(); ++order_it) {
                if (order_it->id == order_id) {
                    orders.erase(order_it);
                    if (orders.empty()) {
                        book.erase(level_it);
                    }
                    return true;
                }
            }
        }
        return false;
    }

    BidBook bids_;
    AskBook asks_;
};

int main() {
    OrderBook book;

    book.add_limit(Order{1, Side::Sell, 105, 10});
    book.add_limit(Order{2, Side::Sell, 106, 10});
    assert(book.best_ask().value() == 105);

    auto trades = book.add_limit(Order{3, Side::Buy, 105, 6});
    assert(trades.size() == 1);
    assert(trades.front().quantity == 6);
    assert(book.best_ask().value() == 105);

    trades = book.add_limit(Order{4, Side::Buy, 105, 4});
    assert(trades.size() == 1);
    assert(book.best_ask().value() == 106);

    assert(book.cancel(2));
    assert(!book.best_ask().has_value());

    std::cout << "basic order book checks passed\n";

    // TODO: Make cancel near O(1), add replay log, and benchmark hot paths.
}

