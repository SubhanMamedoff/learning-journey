# Cash (CS50x Problem Set 1)

This folder contains my solution for the **Cash** problem from **CS50x Problem Set 1**.

---

## 📌 Description
The program calculates the minimum number of coins needed to give a user change.  
The coins considered are **quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)**.  

**Example Interaction:**
```

Change Owed: 41
4

````
- Input is the amount of change owed in cents.  
- Output is the minimum number of coins needed to make that change.

---

## 🛠️ Concepts Used
- Functions (`greedy`, `get_positive_int`)  
- Loops (`do-while`)  
- Conditionals (`if` in the form of loop checks)  
- Arithmetic operations for greedy algorithm  
- Using the `cs50` library (`get_int`)  

---

## 🔧 How to Run
1. Compile the program:
```bash
make cash
````

2. Run the program:

```bash
./cash
```

3. Enter the amount of change owed when prompted. The program will return the minimum number of coins.

---

## 🎯 Key Learnings

* Implementing a **greedy algorithm** in C
* Handling user input and validating it
* Using functions to organize code
* Performing integer arithmetic to calculate change

