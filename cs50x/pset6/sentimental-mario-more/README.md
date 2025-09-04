# Mario More (CS50x – Problem Set 6)

This program is part of **Harvard’s CS50x Problem Set 6**.
It recreates the **“Mario More”** problem, which requires printing a **double half-pyramid** of hashes (`#`) inspired by the classic Nintendo game.

---

## 📌 Problem Description

The task is to prompt the user for a **pyramid height** (an integer between 1 and 8, inclusive) and print a **side-by-side pyramid** of that height.

* The **left pyramid** is right-aligned.
* The **right pyramid** starts after **two spaces**.
* Both grow in size row by row.

### Example (height = 4)

```
   #  #
  ##  ##
 ###  ###
####  ####
```

---

## 🛠️ Code Overview

The implementation is written in **Python** (`mario.py`) and follows these steps:

### 1. `get_height()`

* Continuously prompts the user for input until a valid integer between **1 and 8** is entered.
* Uses `try/except` for **input validation** to handle non-integer values.

### 2. `main(height)`

* Builds the pyramid row by row:

  * Calculates leading spaces (`" " * (tmp - 1)`).
  * Prints the left pyramid (`#` characters).
  * Prints **two spaces** as a separator.
  * Prints the right pyramid (`#` characters).
* Uses string multiplication and concatenation to control alignment.

### 3. Program Flow

* Calls `get_height()` to receive valid input.
* Passes height to `main(height)` to print the pyramid.

---

## 🚀 How to Run

From inside the `mario-more` directory:

```bash
python mario.py
```

### Example Run

```
Height: 5
    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####
```

---

## 📝 Reflection

This exercise emphasized:

* **Input validation**: Ensuring only integers between 1 and 8 are accepted.
* **Looping and string multiplication**: Efficiently generating spaces and hashes.
* **Output formatting**: Printing two pyramids side by side with proper alignment.
* **Code readability**: Breaking the solution into functions (`get_height`, `main`) for clarity.
