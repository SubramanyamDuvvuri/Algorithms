# 04 - Trees, Tries, And Indexes

Goal: understand hierarchical data, ordered lookup, prefixes, and storage indexes.

## Binary Trees

Know:

- Traversals: inorder, preorder, postorder, level order.
- Recursion vs explicit stack.
- Height and balance.
- Serialization.

## Binary Search Trees

Invariant:

- Left keys are smaller.
- Right keys are larger.

Unbalanced BST can become O(n). Balanced trees preserve O(log n).

Study:

- AVL tree.
- Red-black tree.
- B-tree concept.

C++ `std::map` is typically implemented as a red-black tree.

## Tries

Tries optimize prefix queries.

Tradeoffs:

- Fast prefix lookup.
- High memory usage.
- Can compress paths with radix trees.

Production uses:

- Autocomplete.
- Routing tables.
- Dictionary matching.
- IP prefix matching with specialized variants.

## Indexes

Databases use tree-like structures:

- B-tree/B+tree for page-friendly ordered indexes.
- LSM tree for write-heavy storage.
- Inverted index for search.

You do not need to fully implement all of them immediately, but you must understand their tradeoffs.

## Brutal Exercises

1. Implement BST insert/find/delete.
2. Implement AVL rotations and prove balance maintenance.
3. Implement trie autocomplete with top-k suggestions.
4. Design B+tree page layout on paper.
5. Compare B-tree and LSM tree for read-heavy vs write-heavy systems.

