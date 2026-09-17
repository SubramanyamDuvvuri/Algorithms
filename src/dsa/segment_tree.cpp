#include <cassert>
#include <limits>
#include <vector>

class SegmentTree {
public:
    explicit SegmentTree(const std::vector<int>& values) : n_{static_cast<int>(values.size())}, tree_(4 * values.size()) {
        build(values, 1, 0, n_ - 1);
    }

    int range_min(int left, int right) const {
        return range_min(1, 0, n_ - 1, left, right);
    }

    void update(int index, int value) {
        update(1, 0, n_ - 1, index, value);
    }

private:
    void build(const std::vector<int>& values, int node, int left, int right) {
        if (left == right) {
            tree_[node] = values[left];
            return;
        }

        const int mid = left + (right - left) / 2;
        build(values, node * 2, left, mid);
        build(values, node * 2 + 1, mid + 1, right);
        tree_[node] = std::min(tree_[node * 2], tree_[node * 2 + 1]);
    }

    int range_min(int node, int left, int right, int query_left, int query_right) const {
        if (query_right < left || right < query_left) {
            return std::numeric_limits<int>::max();
        }

        if (query_left <= left && right <= query_right) {
            return tree_[node];
        }

        const int mid = left + (right - left) / 2;
        return std::min(
            range_min(node * 2, left, mid, query_left, query_right),
            range_min(node * 2 + 1, mid + 1, right, query_left, query_right));
    }

    void update(int node, int left, int right, int index, int value) {
        if (left == right) {
            tree_[node] = value;
            return;
        }

        const int mid = left + (right - left) / 2;
        if (index <= mid) {
            update(node * 2, left, mid, index, value);
        } else {
            update(node * 2 + 1, mid + 1, right, index, value);
        }

        tree_[node] = std::min(tree_[node * 2], tree_[node * 2 + 1]);
    }

    int n_{};
    std::vector<int> tree_;
};

int main() {
    SegmentTree tree{{5, 2, 8, 6, 1, 9}};
    assert(tree.range_min(0, 5) == 1);
    assert(tree.range_min(0, 2) == 2);
    assert(tree.range_min(2, 3) == 6);

    tree.update(4, 7);
    assert(tree.range_min(0, 5) == 2);

    tree.update(1, 10);
    assert(tree.range_min(0, 5) == 5);

    // TODO: Add lazy propagation for range add and range minimum query.
}

