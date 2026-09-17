# Project 02 - Mini Database

Build a simple embedded key-value database.

## Problem

Implement a persistent key-value store with append-only storage and in-memory indexing.

## API

```cpp
class Database {
public:
    void put(std::string key, std::string value);
    std::optional<std::string> get(std::string_view key) const;
    bool remove(std::string_view key);
    void compact();
};
```

## Requirements

- Append-only log file.
- In-memory index from key to latest record location.
- Tombstones for deletes.
- Startup recovery by replaying log.
- Compaction to remove old records.
- Clear error handling for corrupt records.
- Basic benchmark.

## Stretch Requirements

- Checksums.
- Write-ahead manifest.
- Snapshot index.
- Prefix scans.
- Background compaction.
- Thread-safe reader/writer design.

## Concepts Practiced

- File I/O.
- Serialization.
- Data structures.
- Crash recovery.
- API design.
- Compaction.
- Performance measurement.

## Design Questions

1. What is durable after `put` returns?
2. How do you detect partial writes?
3. What happens during crash while compacting?
4. Can reads happen during compaction?
5. How large can the in-memory index become?
6. How would this design change for multiple processes?

## Deliverables

- Working key-value store.
- Corruption tests.
- Recovery tests.
- Compaction tests.
- Design doc and ADR for storage format.

