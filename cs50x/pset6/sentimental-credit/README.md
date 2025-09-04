# Credit (CS50x – Problem Set 6)

This program is part of **Harvard’s CS50x Problem Set 6**.
It implements a **credit card number validator** using **Luhn’s Algorithm** and identifies the card type.

---

## 📌 Problem Description

The task is to prompt the user for a **credit card number** and determine:

1. If the number is **valid** according to **Luhn’s Algorithm**.
2. If valid, the **type of card** (AMEX, VISA, or MASTERCARD).

**Requirements:**

* Only numeric input is accepted.
* Validation is performed using **Luhn’s checksum**: double every second digit from the right, sum the digits, and ensure total modulo 10 is 0.
* Determine card type based on **length** and **prefix**:

  * **AMEX:** 15 digits, starts with 34 or 37
  * **VISA:** 13 or 16 digits, starts with 4
  * **MASTERCARD:** 16 digits, starts with 51–55

---

## 🛠️ Code Overview

The implementation in **Python** (`credit.py`) includes three main functions:

### 1. `alg(number)`

* Implements **Luhn’s Algorithm**:

  1. Iterate through digits from right to left.
  2. Double every second digit, sum digits of results.
  3. Add untouched digits.
  4. If total modulo 10 equals 0 → valid.
* Returns `"Valid"` or `"Invalid"`.

### 2. `card_type(number)`

* Determines the type of card based on **prefix** and **length**:

  * Extract first one or two digits.
  * Compare to known patterns for AMEX, VISA, and MASTERCARD.
* Returns card type as a string or `"INVALID"` if unknown.

### 3. `main()`

* Prompts user for **credit card number**.
* Calls `alg()` to validate number.
* If valid, calls `card_type()` and prints result; otherwise prints `"INVALID"`.

---

## 🔹 Example Runs

```
Number: 378282246310005
AMEX
```

```
Number: 4111111111111111
VISA
```

```
Number: 5105105105105100
MASTERCARD
```

```
Number: 1234567890
INVALID
```

---

## 📝 Reflection

This problem helped me practice:

* **Luhn’s Algorithm** and numeric manipulations.
* Using **loops, modulo, and integer division** to process digits.
* **Conditional logic** for identifying credit card types.
* Structuring Python code for readability and maintainability.
* Handling **edge cases**, including invalid numbers and unknown prefixes.