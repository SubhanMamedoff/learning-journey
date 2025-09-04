# Readability (CS50x – Problem Set 6)

This program is part of **Harvard’s CS50x Problem Set 6**.
It implements the **Coleman-Liau Index** to estimate the **U.S. grade level** required to comprehend a given text.

---

## 📌 Problem Description

The task is to **analyze a block of text** and output a **readability grade** according to the Coleman-Liau formula:

$$
\text{index} = 0.0588 \times L - 0.296 \times S - 15.8
$$

Where:

* $L$ = average number of **letters per 100 words**
* $S$ = average number of **sentences per 100 words**

**Program behavior:**

* Prompt user for a text input.
* Count **letters, words, and sentences**.
* Compute the **Coleman-Liau index**.
* Print the grade as:

  * `"Before Grade 1"` if grade < 1
  * `"Grade 16+"` if grade ≥ 16
  * `"Grade X"` for intermediate grades

---

## 🛠️ Code Overview

The Python implementation (`readability.py`) consists of:

### 1. `count_letters(text, length)`

* Iterates over each character in the text.
* Counts **alphabetic characters** only (`A-Z` or `a-z`).
* Returns total letter count.

### 2. `count_words(text, length)`

* Counts **words** by tracking spaces.
* Starts at 1 to account for the first word.
* Returns total word count.

### 3. `count_sentences(text, length)`

* Counts **sentences** by detecting `.`, `!`, or `?`.
* Returns total sentence count.

### 4. `main()`

* Handles **user input**.
* Calls the helper functions to compute letters, words, and sentences.
* Calculates `L` and `S` as percentages.
* Computes the **Coleman-Liau index** and rounds it.
* Prints the corresponding grade level.

---

## 🔹 Example Runs

```
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

```
Text: One fish. Two fish. Red fish. Blue fish.
Before Grade 1
```

```
Text: Harry Potter and the Sorcerer's Stone is a popular book series.
Grade 5
```

---

## 📝 Reflection

This exercise helped me practice:

* **Text analysis and parsing** using Python.
* Implementing **mathematical formulas** in code.
* Using **string methods** (`isalpha()`, indexing, and comparisons).
* Handling edge cases in **counting words and sentences**.
* Translating algorithmic logic from **C to Python** effectively.