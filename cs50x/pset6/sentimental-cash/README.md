# Cash (CS50x – Problem Set 6)

This program is part of **Harvard’s CS50x Problem Set 6**.
It implements a **change-making calculator** that determines the **minimum number of coins** needed to give a customer change.

---

## 📌 Problem Description

The task is to ask the user for a **dollar amount** (e.g., 0.41 for 41 cents) and compute the **minimum number of coins** needed using standard U.S. denominations:

* Quarters (25¢)
* Dimes (10¢)
* Nickels (5¢)
* Pennies (1¢)

**Key requirements:**

* Round the input to the nearest cent.
* Use a **greedy algorithm** to minimize the number of coins.
* Only **non-negative amounts** are accepted.

### Example

```
Change: 0.41
4
```

Explanation: 1 quarter, 1 dime, 1 nickel, 1 penny → total 4 coins.

---

## 🛠️ Code Overview

The implementation is written in **Python** (`cash.py`) and includes the following functions:

### 1. `get_cents()`

* Continuously prompts the user until a **non-negative float** is entered.
* Converts dollars to **cents** (`int(round(cents * 100))`) to avoid floating-point precision issues.

### 2. `greedy(cents)`

* Uses a **greedy approach** to calculate the minimum number of coins:

  * Start with the **largest coin** (quarters), take as many as possible.
  * Move to **dimes**, then **nickels**, then **pennies**.
* Returns the **total number of coins**.

### 3. `main(cents)`

* Calls `greedy(cents)` and prints the result.

### Program Flow

1. Call `get_cents()` to retrieve valid input.
2. Pass cents to `main()` to calculate and print the coin count.

---

## 🚀 How to Run

From inside the directory containing `cash.py`:

```bash
python cash.py
```

**Example Run:**

```
Change: 0.99
9
```

---

## 📝 Reflection

This exercise emphasized:

* **Greedy algorithms**: Choosing the largest coin possible at each step guarantees a minimal solution for standard U.S. coins.
* **Input validation**: Ensuring only valid, non-negative values are accepted.
* **Integer arithmetic**: Converting floats to cents to prevent floating-point errors.
* **Code modularity**: Separating input handling, algorithm logic, and output into functions (`get_cents`, `greedy`, `main`).

It reinforced **algorithmic thinking** and **basic Python programming skills**, including loops, integer division, modulo operations, and input handling.
