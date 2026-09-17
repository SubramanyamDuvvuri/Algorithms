#include <cassert>
#include <functional>
#include <limits>
#include <optional>
#include <queue>
#include <utility>
#include <vector>

class Graph {
public:
    explicit Graph(int nodes) : adjacency_(nodes) {}

    void add_directed_edge(int from, int to, int weight = 1) {
        adjacency_[from].push_back({to, weight});
    }

    std::vector<int> bfs_distances(int source) const {
        std::vector<int> distance(adjacency_.size(), -1);
        std::queue<int> queue;

        distance[source] = 0;
        queue.push(source);

        while (!queue.empty()) {
            const int node = queue.front();
            queue.pop();

            for (const auto& edge : adjacency_[node]) {
                if (distance[edge.to] == -1) {
                    distance[edge.to] = distance[node] + 1;
                    queue.push(edge.to);
                }
            }
        }

        return distance;
    }

    std::vector<int> dijkstra(int source) const {
        constexpr int infinity = std::numeric_limits<int>::max() / 4;
        std::vector<int> distance(adjacency_.size(), infinity);
        using State = std::pair<int, int>; // distance, node
        std::priority_queue<State, std::vector<State>, std::greater<State>> heap;

        distance[source] = 0;
        heap.push({0, source});

        while (!heap.empty()) {
            const auto [current_distance, node] = heap.top();
            heap.pop();

            if (current_distance != distance[node]) {
                continue;
            }

            for (const auto& edge : adjacency_[node]) {
                if (distance[edge.to] > current_distance + edge.weight) {
                    distance[edge.to] = current_distance + edge.weight;
                    heap.push({distance[edge.to], edge.to});
                }
            }
        }

        return distance;
    }

    std::optional<std::vector<int>> topological_order() const {
        std::vector<int> indegree(adjacency_.size());
        for (const auto& edges : adjacency_) {
            for (const auto& edge : edges) {
                ++indegree[edge.to];
            }
        }

        std::queue<int> ready;
        for (int node = 0; node < static_cast<int>(indegree.size()); ++node) {
            if (indegree[node] == 0) {
                ready.push(node);
            }
        }

        std::vector<int> order;
        while (!ready.empty()) {
            const int node = ready.front();
            ready.pop();
            order.push_back(node);

            for (const auto& edge : adjacency_[node]) {
                --indegree[edge.to];
                if (indegree[edge.to] == 0) {
                    ready.push(edge.to);
                }
            }
        }

        if (order.size() != adjacency_.size()) {
            return std::nullopt;
        }

        return order;
    }

private:
    struct Edge {
        int to{};
        int weight{};
    };

    std::vector<std::vector<Edge>> adjacency_;
};

int main() {
    Graph graph{6};
    graph.add_directed_edge(0, 1, 7);
    graph.add_directed_edge(0, 2, 9);
    graph.add_directed_edge(1, 3, 3);
    graph.add_directed_edge(2, 3, 1);
    graph.add_directed_edge(3, 4, 2);

    const auto bfs = graph.bfs_distances(0);
    assert(bfs[4] == 3);

    const auto shortest = graph.dijkstra(0);
    assert(shortest[4] == 12);

    const auto topo = graph.topological_order();
    assert(topo.has_value());
    assert(topo->front() == 0);

    Graph cyclic{2};
    cyclic.add_directed_edge(0, 1);
    cyclic.add_directed_edge(1, 0);
    assert(!cyclic.topological_order().has_value());

    // TODO: Add SCC, Bellman-Ford, path reconstruction, and graph labels.
}

