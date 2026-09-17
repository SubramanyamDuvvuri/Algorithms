#include <array>
#include <cassert>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

class Trie {
public:
    void insert(std::string_view word) {
        Node* node = &root_;
        for (char ch : word) {
            const int index = to_index(ch);
            if (!node->children[index]) {
                node->children[index] = std::make_unique<Node>();
            }
            node = node->children[index].get();
        }
        node->terminal = true;
    }

    bool contains(std::string_view word) const {
        const Node* node = find_node(word);
        return node != nullptr && node->terminal;
    }

    bool starts_with(std::string_view prefix) const {
        return find_node(prefix) != nullptr;
    }

    std::vector<std::string> words_with_prefix(std::string_view prefix) const {
        std::vector<std::string> result;
        const Node* node = find_node(prefix);
        if (node == nullptr) {
            return result;
        }

        std::string current{prefix};
        collect(node, current, result);
        return result;
    }

private:
    struct Node {
        std::array<std::unique_ptr<Node>, 26> children{};
        bool terminal{false};
    };

    static int to_index(char ch) {
        assert(ch >= 'a' && ch <= 'z');
        return ch - 'a';
    }

    const Node* find_node(std::string_view text) const {
        const Node* node = &root_;
        for (char ch : text) {
            const int index = to_index(ch);
            if (!node->children[index]) {
                return nullptr;
            }
            node = node->children[index].get();
        }
        return node;
    }

    static void collect(const Node* node, std::string& current, std::vector<std::string>& result) {
        if (node->terminal) {
            result.push_back(current);
        }

        for (int i = 0; i < 26; ++i) {
            if (node->children[i]) {
                current.push_back(static_cast<char>('a' + i));
                collect(node->children[i].get(), current, result);
                current.pop_back();
            }
        }
    }

    Node root_;
};

int main() {
    Trie trie;
    trie.insert("code");
    trie.insert("coder");
    trie.insert("coding");
    trie.insert("system");

    assert(trie.contains("code"));
    assert(!trie.contains("cod"));
    assert(trie.starts_with("cod"));

    const auto words = trie.words_with_prefix("cod");
    assert(words.size() == 3);

    // TODO: Add uppercase support, ranked autocomplete, and compressed radix nodes.
}

