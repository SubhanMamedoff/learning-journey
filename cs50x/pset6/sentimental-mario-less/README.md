# Mario Less – Problem Set 6

This program is part of **Harvard’s CS50x – Problem Set 6**.
It recreates the **Mario half-pyramid** problem from *Super Mario Bros*, where the pyramid is aligned to the right side.

---

## 📌 Problem Description

The program asks the user for an integer `h` (1 ≤ h ≤ 8), representing the **height** of the pyramid.
It then prints a **half-pyramid** made of `#` symbols, aligned to the right.

### Example

```
Height: 4
   #
  ##
 ###
####
```

---

## 🛠️ Implementation Details

* **`get_height()`**

  * Continuously prompts the user until a valid integer between 1 and 8 is provided.
  * Handles invalid inputs (`ValueError`) gracefully with a `try-except` block.

* **`main(height)`**

  * Builds the pyramid row by row.
  * Uses:

    * `" " * (tmp - 1)` → to generate the necessary spaces.
    * `"#"` repeated and incremented → to generate the blocks.
  * Each row prints spaces followed by hashes.

* **Flow**

  1. Call `get_height()` to get valid input.
  2. Pass it to `main()` to draw the pyramid.

---

## 🚀 How to Run

```bash
python mario-less.py
```

Then input the pyramid height (between 1 and 8).

---

## 📝 Reflection

From this problem, I learned:

* How to validate **user input** in Python with loops and `try-except`.
* How to build patterns using **string multiplication and concatenation**.
* How to organize code into **functions (`get_height`, `main`)** for readability.
