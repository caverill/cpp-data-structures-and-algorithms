**# What Are Algorithms?

An **algorithm** is a set of steps used to solve a problem or set of problems. A **problem** can have many **solutions**, and different **algorithms** can be used to find those solutions with varying levels of **efficiency**.

**Problem** → what needs to be solved.  
**Solution** → a valid answer to the problem.  
**Algorithm** → a defined procedure for obtaining a solution.  
**Efficiency** → how much time, memory, or other resources the algorithm requires.

## What Makes an Algorithm an Algorithm?

For a procedure to be considered an **algorithm**, it should have several important characteristics:

- **Clearly Defined Problem** → The algorithm must have a specific problem or task that it is designed to solve.
- **Input** → The algorithm can receive zero or more inputs—the information or data it needs to solve the problem.
- **Output** → The algorithm must produce at least one output or result.
- **Definite Steps** → Each step must be **clear and unambiguous**.
- **Ordered Steps** → The steps must be performed in a **defined sequence**.
- **Finite** → The algorithm must eventually **terminate**.
- **Effective Steps** → Each step must be possible to perform and should move the algorithm toward completing its task.

### In Simple Terms

An algorithm should answer these questions:

**What problem am I solving?**  
↓  
**What information do I start with? (Input)**  
↓  
**What steps do I follow? (Process)**  
↓  
**Do the steps eventually stop? (Finite)**  
↓  
**What result do I produce? (Output)**

This can be summarized using the **Input → Process → Output** model:

**Input → Algorithm → Output**

## Algorithmic Thinking

Before we can create an **algorithm**, we need to think about **how to solve the problem**.

**Algorithmic thinking** is a problem-solving approach where we break a problem down into a clear, ordered, and repeatable series of steps.

**Problem → Algorithmic Thinking → Algorithm → Solution**

## Types of Search Algorithms

**Linear (Sequential) Search**  
: A method of finding a value by checking each element sequentially until the target is found or the entire list has been searched

**Binary Search**  
: A method of finding a value in a **sorted list** by checking the middle value and repeatedly eliminating half of the remaining possibilities.

## Comparing Search Algorithms

Imagine you're playing a game where people take turns guessing a number **between 1 and 10, inclusive**. The player who finds the correct number using the fewest guesses wins.

### Example 1: The Number Is 3

**Player A** guesses sequentially:

`1 → 2 → 3`

Player A finds the answer in **3 guesses**.

**Player B** uses the feedback from each guess to narrow down the possibilities:

`5 (too high) → 2 (too low) → 3`

Player B also finds the answer in **3 guesses**.

Although both players found the answer in three guesses, they used **different strategies (algorithms)** to solve the same problem.

---

### Example 2: The Number Is 10

Now suppose the correct number is **10**.

**Player A** uses the same sequential strategy:

`1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 10`

Player A finds the answer in **10 guesses**.

**Player B** uses the feedback from each guess to narrow down the possibilities:

`5 (too low) → 8 (too low) → 9 (too low) → 10`

Player B finds the answer in **4 guesses**.

Both approaches eventually solve the problem, but Player B's **algorithm is more efficient** in this example because it eliminates possibilities based on information gained from previous guesses.

---

### Example 3: When Is One Strategy Better?

Now let's increase the range to **1–100**, with the correct number being **5**.

**Player A** uses a linear search:

`1 → 2 → 3 → 4 → 5`

Player A finds the answer in **5 guesses**.

**Player B** repeatedly narrows down the possibilities:

`50 → 25 → 13 → 7 → 4 → 5`

Player B finds the answer in **6 guesses**.

In this case, Player A requires fewer guesses because the answer is close to the beginning of the range. However, if the answer were closer to **100**, Player A could require many more guesses.

This shows that an algorithm's performance can change depending on the input. To compare algorithms more generally, we look at **algorithmic efficiency**.

## What Is Algorithmic Efficiency?

Algorithmic efficiency is mainly measured using two concepts:

- **Time Complexity** → how the amount of work required grows as the input size increases.
- **Space Complexity** → how the amount of memory required grows as the input size increases.

In our guessing example, we are mainly concerned with **time complexity** because we are comparing the number of guesses required.

**