# Big O Notation

**Big O notation** describes how an algorithm's resource usage grows as the input size `n` increases.

`n` represents the **input size**.

For example, if an array contains 100 elements:

`n = 100`

The main question Big O helps answer is:

> **What happens to the amount of work as `n` gets bigger?**

---

## Common Values of Big O

### O(1) — Constant Time

The amount of work stays roughly the **same**, regardless of the input size.

**Example**

Accessing an array element when its index is already known.

**As `n` Grows**

- 10 elements → ~1 operation
- 100 elements → ~1 operation
- 1,000 elements → ~1 operation

Even though `n` increases, the amount of work stays **constant**.

**Common Algorithms / Operations**

- Accessing an array element by index
- Adding or removing the top element of a stack
- Hash table lookup (average case)

---

### O(log n) — Logarithmic Time

The amount of work grows **very slowly** as the input size increases.

**Example**

Binary search eliminates half of the remaining possibilities after each step.

**As `n` Grows**

- 8 elements → ~3 operations
- 16 elements → ~4 operations
- 32 elements → ~5 operations
- 64 elements → ~6 operations

When `n` doubles, the work increases by only about **one additional step**.

**Common Algorithms / Operations**

- Binary search
- Searching a balanced binary search tree

---

### O(n) — Linear Time

The amount of work grows at roughly the **same rate as the input size**.

**Example**

Linear search may need to check every element one at a time.

**As `n` Grows**

- 10 elements → up to ~10 operations
- 100 elements → up to ~100 operations
- 1,000 elements → up to ~1,000 operations

When `n` doubles, the amount of work can roughly **double**.

**Common Algorithms / Operations**

- Linear search
- Finding the largest element in an unsorted array
- Traversing an array
- Traversing a linked list

---

### O(n log n) — Quasilinear Time

The amount of work grows **faster than linear time**, but much slower than quadratic time.

Think of it as:

`n × log n`

**Example**

Merge sort repeatedly divides the data into smaller pieces and processes the elements while putting those pieces back together.

**As `n` Grows**

- 8 elements → ~24 operations
- 16 elements → ~64 operations
- 32 elements → ~160 operations
- 64 elements → ~384 operations

**Common Algorithms**

- Merge sort
- Heap sort
- Quicksort (average case)

---

### O(n²) — Quadratic Time

The amount of work grows roughly as:

`n × n`

This often happens when, for every element, an algorithm processes all of the elements again.

**Example**

Two nested loops that each process all `n` elements.

**As `n` Grows**

- 10 elements → ~100 operations
- 100 elements → ~10,000 operations
- 1,000 elements → ~1,000,000 operations

When `n` doubles, the amount of work can roughly **quadruple**.

**Common Algorithms / Operations**

- Bubble sort
- Selection sort
- Insertion sort (worst case)
- Comparing every element with every other element

---

### O(n³) — Cubic Time

The amount of work grows roughly as:

`n × n × n`

**Example**

Three nested loops that each process all `n` elements.

**As `n` Grows**

- 10 elements → ~1,000 operations
- 100 elements → ~1,000,000 operations
- 1,000 elements → ~1,000,000,000 operations

When `n` doubles, the amount of work can roughly **increase eightfold**.

**Common Algorithms / Operations**

- Naive matrix multiplication
- Some algorithms using three nested loops over the input

---

## Comparing Growth

| Big O | Name | Think of it as |
| --- | --- | --- |
| `O(1)` | Constant | Same amount of work |
| `O(log n)` | Logarithmic | Grows very slowly |
| `O(n)` | Linear | `n` |
| `O(n log n)` | Quasilinear | `n × log n` |
| `O(n²)` | Quadratic | `n × n` |
| `O(n³)` | Cubic | `n × n × n` |

As we move down the table, the amount of work grows faster as `n` gets larger.

![Big O time complexity graph](/images/big-o-time-complexity-graph.png)

The graph shows how dramatically the growth rate changes as we move from polynomial runtimes toward exponential runtimes.

---

## Polynomial vs. Exponential Runtime

**Polynomial Time**

Polynomial-time algorithms have runtimes that can be bounded by a polynomial in `n`.

A common form is:

`O(nᵏ)`

where `k` is a fixed constant.

For example:

- `O(n)` → Linear
- `O(n²)` → Quadratic
- `O(n³)` → Cubic

`O(log n)` and `O(n log n)` are not themselves polynomial expressions, but they are also considered polynomial-time because their growth can be bounded by a polynomial.

Polynomial-time algorithms are generally considered **efficient or tractable**, although very large polynomial runtimes can still become impractical.

---

**Exponential Time**

Exponential time occurs when the input size `n` appears in the **exponent**.

A common form is:

`O(aⁿ)`

where `a` is a constant greater than 1.

Unlike polynomial growth, a small increase in `n` can cause a very large increase in the amount of work.

**Example — Brute Force**

Imagine trying every possible combination of a padlock where each dial contains the digits `0–9`.

With 2 dials:

`10² = 100 combinations`

With 3 dials:

`10³ = 1,000 combinations`

In general, with `n` dials:

`10ⁿ`

**As `n` Grows**

- 2 dials → 100 combinations
- 3 dials → 1,000 combinations
- 4 dials → 10,000 combinations
- 5 dials → 100,000 combinations
- 10 dials → 10,000,000,000 combinations

Each additional dial makes the number of possible combinations **10 times larger**.

A brute-force search that tries every combination therefore has a runtime of:

`O(10ⁿ)`

Exponential algorithms can become impractical very quickly as `n` increases.

---

**Traveling Salesman Problem (TSP)**

The **Traveling Salesman Problem** asks for the shortest route that visits every city and returns to the starting city.

There is no known polynomial-time algorithm that solves the general TSP exactly.

A brute-force approach tries every possible order in which the cities could be visited.

**As `n` Grows**

- 3 cities → `3!` → 6 possible routes
- 4 cities → `4!` → 24 possible routes
- 5 cities → `5!` → 120 possible routes
- 10 cities → `10!` → 3,628,800 possible routes

**Common Algorithms**

- Brute-force solution → `O(n!)` — Factorial Time
- Held–Karp algorithm → `O(n² × 2ⁿ)` — Exponential Time

These runtimes grow extremely quickly as the number of cities `n` increases.

---

## Polynomial vs. Exponential

The easiest way to recognize the difference is to look at **where `n` appears**:

| Type | Example | Where is `n`? |
| --- | --- | --- |
| Polynomial | `n²` | `n` is the base |
| Polynomial | `n³` | `n` is the base |
| Exponential | `2ⁿ` | `n` is the exponent |
| Exponential | `10ⁿ` | `n` is the exponent |

**Polynomial**

`n²`, `n³`, `n⁴`

`n` is the **base** and the exponent stays fixed.

**Exponential**

`2ⁿ`, `10ⁿ`

`n` is the **exponent**, causing the amount of work to grow much more quickly.