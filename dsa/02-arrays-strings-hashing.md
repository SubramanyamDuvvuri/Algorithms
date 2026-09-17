# 02 - Arrays, Strings, And Hashing

Goal: master the structures behind most interview and systems code.

## Arrays And Vectors

Arrays give contiguous memory and O(1) random access.

Important C++ facts:

- `std::vector` reallocation invalidates pointers, references, and iterators.
- `reserve` changes capacity, not size.
- `resize` changes size and constructs elements.
- `operator[]` does not check bounds.
- `at()` checks bounds and throws.

Patterns:

- Two pointers.
- Sliding window.
- Prefix sums.
- Difference arrays.
- Partitioning.
- Binary search on sorted arrays.
- Binary search on answer.

## Strings

Know:

- `std::string` owns bytes.
- `std::string_view` borrows bytes.
- Small string optimization exists but is implementation-specific.
- Unicode is not solved by indexing bytes.

Patterns:

- Palindrome.
- Anagram counting.
- Prefix function/KMP.
- Rolling hash.
- Trie for prefixes.
- Suffix ideas for advanced search.

## Hashing

Hash tables trade memory for average-case speed.

Understand:

- Hash function.
- Equality.
- Load factor.
- Collision resolution.
- Rehashing.
- Worst-case behavior.

C++ details:

- `std::unordered_map` iterator invalidation can happen on rehash.
- Custom key types require hash and equality.
- Hashing `string_view` is fine only if the view lifetime is safe.

## Production Uses

- Caches.
- Deduplication.
- Indexes.
- Idempotency keys.
- Request routing.
- Symbol tables.
- Metrics aggregation.

## Brutal Exercises

1. Implement open-addressing hash table with tombstones.
2. Implement separate-chaining hash table with incremental rehashing.
3. Build a streaming anagram detector.
4. Build a rolling-hash duplicate document detector.
5. Build a string interner and explain lifetime ownership.

