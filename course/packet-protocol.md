# Recurring Packet Protocol

Lessons 2-4 reuse this small protocol as a concrete example of buffers, records, and named states. Keep its observable behavior fixed while changing the representation and API. The challenge is bounds, lifetime, state, and error handling.

## Version 1 Frame

| Offset | Size | Field | Rule |
| --- | --- | --- | --- |
| 0 | 2 bytes | Magic | `0x43 0x50` |
| 2 | 1 byte | Version | `0x01` |
| 3 | 1 byte | Message type | `0x01` data, `0x02` ping; preserve other values as unknown |
| 4 | 2 bytes | Payload length | Unsigned, little-endian; maximum 1024 |
| 6 | N bytes | Payload | Borrowed view into input; ping requires N = 0 |
| 6 + N | 1 byte | Checksum | XOR of every preceding frame byte, starting at offset 0 |

A frame has exactly `7 + N` bytes. Reject extra trailing bytes for this single-frame decoder. Do not read the length until at least six bytes are present. Validate the maximum and total size before forming a payload view. Decode integers byte by byte; do not cast a pointer to a native struct. A successful zero-allocation decoder may return a `std::span<const std::byte>` into the caller's input, but it must state that the input must outlive the result.

Valid empty data frame: `43 50 01 01 00 00 13` (hex). Valid empty ping frame: `43 50 01 02 00 00 10`.

## Error Contract

Distinguish truncated header, bad magic, unsupported version, oversized length, total-size mismatch, checksum mismatch, and invalid known-type payload rules. Unknown message types are valid opaque messages, not silent copies of the data type. The parser must not access outside its supplied span on any error. Choose an explicit error representation in Lesson 2; revisit alternatives in Lesson 10.

## Lesson Reuse

1. **Lesson 2:** Parse the byte range with pointer-plus-size and span interfaces; calculate checksum; test all bounds. No allocation during decode.
2. **Lesson 3:** Turn parsed fields into named records and explain why native struct layout cannot be the wire format.
3. **Lesson 4:** Model known message types with a scoped enum while retaining unknown raw values for round trips.
4. **Lesson 10 (optional revisit):** Represent data, ping, and unknown messages as variant alternatives and compare error APIs without changing the wire contract.

## Required Tests

Test zero-length and maximum-length payloads; every truncation position; length 1025; bad magic/version/checksum; appended bytes; ping with payload; unknown type preservation; and input destruction after an owning copy. Use a small reference encoder as an oracle for randomized round trips. Never test dangling views by reading them after their owner dies; prove the lifetime contract and test the owning alternative instead.
