#include <cassert>
#include <cstddef>
#include <list>
#include <optional>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <utility>

template <typename Key, typename Value>
class LruCache {
public:
    explicit LruCache(std::size_t capacity) : capacity_{capacity} {
        if (capacity == 0) {
            throw std::invalid_argument{"capacity must be greater than zero"};
        }
    }

    void put(Key key, Value value) {
        if (auto found = index_.find(key); found != index_.end()) {
            found->second->value = std::move(value);
            touch(found->second);
            return;
        }

        entries_.push_front(Entry{std::move(key), std::move(value)});
        index_[entries_.front().key] = entries_.begin();

        if (index_.size() > capacity_) {
            const auto& old_key = entries_.back().key;
            index_.erase(old_key);
            entries_.pop_back();
        }
    }

    std::optional<Value> get(const Key& key) {
        auto found = index_.find(key);
        if (found == index_.end()) {
            return std::nullopt;
        }

        touch(found->second);
        return found->second->value;
    }

    std::size_t size() const {
        return index_.size();
    }

private:
    struct Entry {
        Key key;
        Value value;
    };

    using List = std::list<Entry>;
    using Iterator = typename List::iterator;

    void touch(Iterator iterator) {
        entries_.splice(entries_.begin(), entries_, iterator);
    }

    std::size_t capacity_{};
    List entries_;
    std::unordered_map<Key, Iterator> index_;
};

int main() {
    LruCache<int, std::string> cache{2};
    cache.put(1, "one");
    cache.put(2, "two");

    assert(cache.get(1).value() == "one");

    cache.put(3, "three");

    assert(cache.get(2) == std::nullopt);
    assert(cache.get(1).value() == "one");
    assert(cache.get(3).value() == "three");

    // TODO: Add TTL, metrics, customizable hash/equality, and a thread-safe wrapper.
}

