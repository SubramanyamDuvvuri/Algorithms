#include <cassert>
#include <numeric>
#include <vector>

class DisjointSet {
public:
    explicit DisjointSet(int n) : parent_(n), size_(n, 1) {
        std::iota(parent_.begin(), parent_.end(), 0);
    }

    int find(int x) {
        if (parent_[x] != x) {
            parent_[x] = find(parent_[x]);
        }
        return parent_[x];
    }

    bool unite(int a, int b) {
        int root_a = find(a);
        int root_b = find(b);

        if (root_a == root_b) {
            return false;
        }

        if (size_[root_a] < size_[root_b]) {
            std::swap(root_a, root_b);
        }

        parent_[root_b] = root_a;
        size_[root_a] += size_[root_b];
        return true;
    }

    bool connected(int a, int b) {
        return find(a) == find(b);
    }

    int component_size(int x) {
        return size_[find(x)];
    }

private:
    std::vector<int> parent_;
    std::vector<int> size_;
};

int main() {
    DisjointSet dsu{6};
    assert(!dsu.connected(0, 1));

    assert(dsu.unite(0, 1));
    assert(dsu.unite(1, 2));
    assert(dsu.connected(0, 2));
    assert(dsu.component_size(0) == 3);

    assert(dsu.unite(3, 4));
    assert(!dsu.connected(0, 4));
    assert(dsu.unite(2, 4));
    assert(dsu.connected(0, 3));
    assert(!dsu.unite(0, 4));

    // TODO: Implement rollback DSU and use it for offline connectivity queries.
}

