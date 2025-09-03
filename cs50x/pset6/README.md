# Problem Set 6 – Python

This folder contains my solutions to **Harvard’s CS50x Problem Set 6**, where the focus shifts from C to **Python**.
The problems emphasize translating earlier C programs into Python, gaining fluency with Python syntax, and working with files, text, and algorithms.

---

## 📌 Problems Overview

### 1. Hello

* A simple program that asks the user for their **name** and then prints a personalized greeting in the format:

  ```
  hello, name
  ```
* Demonstrates **user input** and **string formatting** in Python.
---

### 2. **Mario (Less / More)**

* Recreates the Mario pyramid problem (originally in C).
* **Mario Less:** prints a half-pyramid of hashes (`#`) aligned to the left.
* **Mario More:** prints a full pyramid with two halves separated by spaces.
* Practice: **loops**, **string multiplication**, and user input validation.

---

### 3. **Cash**

* Converts a given dollar amount into the **minimum number of coins** needed for change.
* Practice: **greedy algorithms** with quarters, dimes, nickels, and pennies.
* Implementation in Python using `while` loops and integer division.

---

### 4. **Credit**

* Validates credit card numbers using **Luhn’s Algorithm**.
* Determines the card type (AMEX, VISA, MASTERCARD) based on prefixes and length.
* Practice: working with **strings, arithmetic operations, and conditionals**.

---

### 5. **Readability**

* Implements the **Coleman-Liau Index** to estimate the grade level of a text.
* Counts letters, words, and sentences to produce a readability score.
* Practice: **string parsing**, **text analysis**, and implementing a mathematical formula in Python.

---

### 6. **DNA**

* Compares a given DNA sequence against a database of individuals.
* Each person is identified by the count of consecutive short tandem repeats (STRs).
* Program checks which individual (if any) matches the given DNA sequence.
* Practice: **CSV parsing**, **file I/O**, **string pattern matching**, and **nested loops**.

---

## 🛠️ Skills Practiced

* Translating logic from **C to Python**.
* Using **loops, conditionals, and functions** effectively.
* String manipulation (`split`, slicing, searching).
* File handling with `open()`, `csv` module.
* Applying algorithms (greedy change, Luhn’s checksum, DNA matching).

---

## 🚀 How to Run

Each problem can be run with:

```bash
python hello.py
python mario.py
python cash.py
python credit.py
python readability.py
python dna.py databases/large.csv sequences/5.txt
```

> Make sure you are using **Python 3**.

---

## 📝 Reflection

This problem set was my first serious exposure to Python.
I learned how to:

* Write cleaner, more concise code compared to C.
* Manage **types dynamically** without explicit declarations.
* Handle **files and data parsing** using Python libraries.
* Solve algorithmic problems in fewer lines of code while maintaining readability.
