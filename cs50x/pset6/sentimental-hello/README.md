# Hello (Problem Set 6)

This is the first problem in **Harvard's CS50x – Problem Set 6**, implemented in **Python**.
It is a simple introduction to Python syntax, focusing on **input/output**.

---

## 📌 Problem Description

The task is to prompt the user for their **name** and then greet them with a personalized message:

```
hello, name
```

Unlike the traditional "Hello, World!" program, this version demonstrates **string formatting** and **user input handling** in Python.

---

## 🛠️ Implementation Details

* Uses the built-in `input()` function to read the user’s name.
* Uses an **f-string** (formatted string literal) to print the greeting.
* Example:

```python
name = input("What is your name? ")
print(f"hello, {name}")
```

---

## 🚀 How to Run

```bash
python hello.py
```

**Example Run:**

```
What is your name? Alice
hello, Alice
```

---

## 📝 Reflection

This problem was a simple yet important introduction to:

* Taking **user input** in Python.
* Practicing **string interpolation** with f-strings.
* Understanding how Python makes basic I/O more concise compared to C.
