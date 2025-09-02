# Readability

This program implements the **Coleman–Liau index** to estimate the U.S. school grade level required to understand a given text.  
It was developed as part of **Harvard's CS50x – Problem Set 2**.

---

## 📌 Problem Description
The task is to write a program that:
- Analyzes a block of text,
- Counts the number of **letters**, **words**, and **sentences**,
- Calculates the readability score using the Coleman–Liau formula:

```
index = 0.0588 * L - 0.296 * S - 15.8
```
Where:
- **L** = average number of letters per 100 words  
- **S** = average number of sentences per 100 words  

The program then outputs:
- `"Before Grade 1"` if the text is too simple,  
- `"Grade 16+"` if the text is very complex,  
- Or the corresponding grade number.

---

## 🛠️ Concepts Practiced
- **String manipulation** in C  
- **Loops** and conditional statements  
- **Character checking** using `<ctype.h>` (`isalpha`)  
- **Floating-point arithmetic**  
- **Rounding** with `math.h`  

---

## 🚀 How to Run
1. Compile the program:
   ```bash
   make readability
   ```

2. Run the program and enter/paste some text:

   ```bash
   ./readability
   ```

   Example:

   ```
   Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
   Grade 3
   ```

---

## ✨ Example Outputs

* Input: `"One fish. Two fish. Red fish. Blue fish."`
  Output: `Before Grade 1`

* Input: `"Alice was beginning to get very tired of sitting by her sister on the bank."`
  Output: `Grade 8`

---

## 📝 Reflection

Through this problem I learned:

* How to break down text into meaningful components (letters, words, sentences).
* Why text analysis requires careful handling of edge cases (spaces, punctuation).
* How mathematical formulas can be applied in programming to solve real-world tasks like readability analysis.
