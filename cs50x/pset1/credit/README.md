# Credit (CS50x Problem Set 1)

This folder contains my solution for the **Credit** problem from **CS50x Problem Set 1**.

---

## 📌 Description
The program validates credit card numbers and identifies the card type.  
It uses **Luhn’s algorithm** to check if a credit card number is valid and determines whether it is:

- **AMEX** (American Express)  
- **MASTERCARD**  
- **VISA**  
- Or **INVALID** if the number fails the validation.  

**Example Interaction:**
```

Number: 378282246310005
AMEX

````

---

## 🛠️ Concepts Used
- Functions (`alg`, `card_type`, `intlen`)  
- Loops (`while`, `for`)  
- Conditionals (`if`, `else if`, `else`)  
- Strings and comparison (`strcmp`)  
- Mathematical operations and modular arithmetic  
- Luhn’s algorithm implementation  

---

## 🔧 How to Run
1. Compile the program:
```bash
make credit
````

2. Run the program:

```bash
./credit
```

3. Enter a credit card number when prompted. The program will print the card type or `INVALID`.

---

## 🎯 Key Learnings

* Implementing **Luhn’s algorithm** to validate credit card numbers
* Determining card type based on number length and starting digits
* Handling user input using the `cs50` library (`get_long`)
* Structuring code with functions for readability and modularity
