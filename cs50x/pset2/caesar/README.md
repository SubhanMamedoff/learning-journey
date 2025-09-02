# Caesar

This program implements a **Caesar cipher**, a simple substitution cipher used to encrypt messages by shifting each letter by a fixed key.  
It was developed as part of **Harvard's CS50x – Problem Set 2**.

---

## 📌 Problem Description
The task is to write a program that:
- Accepts a **non-negative integer key** as a command-line argument,  
- Prompts the user for **plaintext**,  
- Outputs the **ciphertext** by rotating each alphabetical character by the key,  
- Leaves non-alphabetical characters unchanged.

**Example:**
```

\$ ./caesar 3
plaintext:  HELLO
ciphertext: KHOOR

````

---

## 🛠️ Concepts Practiced
- **Command-line arguments** (`argc`, `argv`)  
- **Input validation**  
- **Character manipulation** using `<ctype.h>` (`isalpha`, `isupper`, `islower`)  
- **Modular arithmetic** for cyclic letter rotation  
- **Type conversion** (`atoi`)  

---

## 🚀 How to Run
1. Compile the program:
   ```bash
   make caesar
   ```

2. Run the program with a numeric key:

   ```bash
   ./caesar 3
   ```
3. Enter your plaintext when prompted. Example:

   ```
   plaintext: Hello, World!
   ciphertext: Khoor, Zruog!
   ```

---

## ✨ Example Outputs

* Input: `"abc XYZ"` with key `2`
  Output: `"cde ZAB"`

* Input: `"CS50 rocks!"` with key `5`
  Output: `"HX50 wtphx!"`

---

## 📝 Reflection

Through this problem I learned:

* How to **validate user input** to ensure only digits are accepted as a key.
* How **modular arithmetic** allows letters to "wrap around" the alphabet.
* How to handle **upper and lowercase letters separately** while leaving symbols unchanged.
* The importance of **breaking problems into smaller functions** (`rotate` and `only_digits`) for readability and maintainability.
