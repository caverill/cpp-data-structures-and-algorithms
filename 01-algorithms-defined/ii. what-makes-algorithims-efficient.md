# What Makes an Algorithm Efficient?

Algorithmic efficiency describes how effectively an algorithm uses resources as the input gets larger.

The two main resources we look at are:

- **Time Complexity** → how the amount of work grows as the input size increases
- **Space Complexity** → how the amount of memory required grows as the input size increases

An algorithm can be very fast but require too much memory.

Likewise, an algorithm can use very little memory but take too long to run.

Choosing an efficient algorithm often involves finding a good **balance between time and space**.

---

## Worst-Case Performance

One way to compare algorithms is by looking at their **worst-case performance**.

The worst case represents the maximum amount of work an algorithm may need to perform for an input of size `n`.

For example, when searching through **100 items**:

- **Linear Search** → up to 100 comparisons
- **Binary Search** → about 7 comparisons

As the amount of data increases, the difference becomes much more significant.

**Linear Search vs. Binary Search**

| Number of Items | Linear Search `O(n)` | Binary Search `O(log n)` |
| ---: | ---: | ---: |
| 10 | 10 | 4 |
| 100 | 100 | 7 |
| 1,000 | 1,000 | 10 |
| 10,000 | 10,000 | 14 |
| 100,000 | 100,000 | 17 |
| 1,000,000 | 1,000,000 | 20 |

Different algorithms grow at different rates.

Looking at this **rate of growth** helps us understand how well an algorithm will scale as the input size `n` becomes larger.

---

## Algorithm Trade-Offs

The algorithm with the fastest runtime is not always the best choice.

Different algorithms can involve trade-offs such as:

- Speed
- Memory usage
- Input size
- How the data is organized
- The cost of preparing the data

**Example**

Binary search is much faster than linear search for large collections, but binary search requires the data to be **sorted**.

Linear search can immediately search unsorted data.

This means choosing an algorithm depends on more than just its speed.

---

## Why Not Measure Exact Runtime?

We could measure how many seconds an algorithm takes to run, but that result can change depending on:

- Computer speed
- Programming language
- Compiler
- Other programs running at the same time

Because of this, exact runtime does not give us a consistent way to compare algorithms.

Instead, we focus on:

> **How does the amount of work grow as the input size `n` increases?**

This rate of growth is what **Big O notation** helps us describe.