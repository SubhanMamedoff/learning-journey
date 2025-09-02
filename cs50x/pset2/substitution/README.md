# Substitution

This program implements a **substitution cipher**, a method of encryption where each letter in the plaintext is replaced with a corresponding letter from a provided key.  
It was developed as part of **Harvard's CS50x – Problem Set 2**.

---

## 📌 Problem Description
The task is to write a program that:
- Accepts a **26-character key** as a command-line argument,  
- Validates the key to ensure:
  - It contains **exactly 26 characters**,  
  - All characters are **alphabetic**,  
  - There are **no repeated letters** in the key,  
- Prompts the user for **plaintext**,  
- Outputs the **ciphertext** by substituting each letter according to the key,  
- Leaves non-alphabetic characters unchanged.

**Example:**
```
$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPOJG
plaintext:  Hello, World!
ciphertext: Eaqqm, Vmpqd!
```

---

## 🛠️ Concepts Practiced
- **Command-line arguments** (`argc`, `argv`)  
- **Input validation**  
- **Character manipulation** (`toupper`, `tolower`)  
- **Arrays and indexing** for mapping letters  
- **String handling** in C  

---

## 🚀 How to Run
1. Compile the program:
   ```
   make substitution
   ```

2. Run the program with a 26-character key:

   ```
   ./substitution YTNSHKVEFXRBAUQZCLWDMIPOJG
   ```
3. Enter your plaintext when prompted. Example:

   ```
   plaintext: CS50 is awesome!
   ciphertext: YV50 mw ykqczgpo!
   ```

---

## ✨ Example Outputs

* Input: `"abc XYZ"` with key `"QWERTYUIOPLKJHGFDSAZXCVBNM"`
  Output: `"QWE BNM"`

* Input: `"CS50 rocks!"` with key `"MNBVCXZLKJHGFDSAPOIUYTREWQ"`
  Output: `"MP50 ibxwp!"`

---

## 📝 Reflection

Through this problem I learned:

* How to **validate complex input rules** (length, alphabetic, uniqueness).
* How to map one alphabet to another efficiently using arrays.
* How to handle **case sensitivity** while leaving symbols intact.
* The importance of modularizing code into **functions** (`ciphering`, `is_alpha`, `isrepeated`) for readability and maintainability.

