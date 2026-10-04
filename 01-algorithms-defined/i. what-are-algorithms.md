# What Are Algorithms?

An **algorithm** is a set of steps used to solve a problem.

A problem can have many possible solutions, and different algorithms can be used to find those solutions with different levels of efficiency.

- **Problem** → what needs to be solved
- **Solution** → a valid answer to the problem
- **Algorithm** → a defined procedure for obtaining a solution
- **Efficiency** → how much time, memory, or other resources the algorithm requires

---

## What Makes an Algorithm an Algorithm?

For a procedure to be considered an **algorithm**, it should have several important characteristics:

- **Clearly Defined Problem** → it must have a specific problem or task to solve
- **Input** → it can receive zero or more pieces of information or data
- **Output** → it must produce at least one result
- **Definite Steps** → each step must be clear and unambiguous
- **Ordered Steps** → the steps must follow a defined sequence
- **Finite** → the algorithm must eventually stop
- **Effective Steps** → each step must be possible to perform and move toward solving the problem

**In Simple Terms**

An algorithm should answer:

**What problem am I solving?**  
↓  
**What information do I start with? (Input)**  
↓  
**What steps do I follow? (Process)**  
↓  
**Do the steps eventually stop? (Finite)**  
↓  
**What result do I produce? (Output)**

This can be simplified to:

**Input → Algorithm → Output**

---

## Algorithmic Thinking

Before creating an algorithm, we first need to think about **how to solve the problem**.

**Algorithmic thinking** is the process of breaking a problem down into a clear, ordered, and repeatable series of steps.

**Problem → Algorithmic Thinking → Algorithm → Solution**

---

## Types of Search Algorithms

**Linear (Sequential) Search**

Checks each element one at a time until the target is found or the entire collection has been searched.

**Binary Search**

Searches a **sorted collection** by checking the middle value and repeatedly eliminating half of the remaining possibilities.

---

## Comparing Search Algorithms

Imagine guessing a number between **1 and 10**. The goal is to find the correct number using as few guesses as possible.

**Example 1 — The Number Is 3**

Player A searches sequentially:

`1 → 2 → 3`

Player A finds the answer in **3 guesses**.

Player B uses each result to narrow down the possibilities:

`5 (too high) → 2 (too low) → 3`

Player B also finds the answer in **3 guesses**.

Both players found the same solution, but they used **different algorithms**.

---

**Example 2 — The Number Is 10**

Player A searches sequentially:

`1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 10`

Player A requires **10 guesses**.

Player B narrows down the possibilities:

`5 (too low) → 8 (too low) → 9 (too low) → 10`

Player B requires **4 guesses**.

Both algorithms solve the problem, but Player B's strategy is more efficient in this example because it eliminates possibilities using information from previous guesses.

---

**Example 3 — When Is One Strategy Better?**

Now increase the range to **1–100**, with the correct number being **5**.

Player A uses a linear search:

`1 → 2 → 3 → 4 → 5`

Player A requires **5 guesses**.

Player B repeatedly narrows down the possibilities:

`50 → 25 → 13 → 7 → 4 → 5`

Player B requires **6 guesses**.

In this case, linear search happens to require fewer guesses because the target is close to the beginning.

This shows that an algorithm's performance can depend on the input.

To compare algorithms more generally, we need to look at **algorithmic efficiency**.