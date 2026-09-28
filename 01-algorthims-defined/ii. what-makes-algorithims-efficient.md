## What Makes an Algorithm Efficient?

Algorithmic efficiency is mainly measured using two concepts:

- **Time Complexity** → measures how the runtime of an algorithm grows as the amount of input increases.
- **Space Complexity** → measures how much memory an algorithm requires as the amount of input increases.

An algorithm can be extremely fast, but that speed may not matter if it requires more memory than the computer has available.

Likewise, an algorithm that uses very little memory may not be practical if it takes too long to run.

Therefore, an efficient algorithm usually involves finding a good **balance between time and space usage**.

---
## Worst-Case Performance

One way to measure an algorithm's efficiency is by looking at its **worst-case performance** — the maximum number of operations or comparisons it may need to complete a task.

For example, when searching through **100 items**:

- **Linear Search** → may require up to **100 comparisons** in the worst case.
- **Binary Search** → may require only about **7 comparisons** in the worst case.

This difference becomes much more significant as the amount of data increases.

#### Linear Search vs. Binary Search

| Number of Items | Linear Search O(n) | Binary Search O(log n) |
|---:|---:|---:|
| 10 | 10 | 4 |
| 100 | 100 | 7 |
| 1,000 | 1,000 | 10 |
| 10,000 | 10,000 | 14 |
| 100,000 | 100,000 | 17 |
| 1,000,000 | 1,000,000 | 20 |

Different algorithms grow at different rates. By evaluating an algorithm's **rate of growth**, we can get a better idea of how well it will perform as the input size `n` becomes larger.

This is important because two algorithms may perform similarly with small inputs, but their performance can become drastically different as `n` increases.

---

## Algorithm Trade-Offs

The most efficient algorithm is not always the best choice in every situation.

Different algorithms may have different requirements or trade-offs involving:

- **Speed**
- **Memory usage**
- **Input size**
- **How the data is organized**
- **The cost of preparing the data**

For example, **binary search** is much faster than linear search for large datasets, but it requires the data to already be **sorted**.

A linear search can work on unsorted data immediately, while binary search may require the data to be sorted first.

---

## Why Not Measure Exact Runtime?

The exact runtime of an algorithm can vary depending on factors such as:

- The speed of the computer
- The programming language
- The compiler
- Other programs running at the same time

Because of this, measuring an algorithm only by seconds does not give us a consistent way to compare algorithms.

Instead, we focus on how the number of operations grows as the input size `n` increases.
