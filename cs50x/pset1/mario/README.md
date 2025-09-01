# Mario (More) - CS50x Problem Set 1

This folder contains my solution for the **Mario (More)** problem from **CS50x Problem Set 1**.

---

## 📌 Description
The program prints a **full pyramid** of hashes (`#`) of a user-specified height, mimicking the pyramid design from Nintendo’s *Super Mario Bros.*  

- The user inputs the **height** of the pyramid (1–8).  
- The pyramid is **two halves** separated by two spaces.

**Example Interaction:**
```

Height: 4

   #  #
  ##  ##
 ###  ###
####  ####

````

---

## 🛠️ Concepts Used
- Loops (`for` loops, nested loops)  
- Functions (`get_positive_int`)  
- Conditionals (`do-while` loop for input validation)  
- Standard input/output (`printf`)  
- User input handling with the `cs50` library (`get_int`)

---

## 🔧 How to Run
1. Compile the program:
```bash
make mario
````

2. Run the program:

```bash
./mario
```

3. Enter a height between 1 and 8. The program prints the full pyramid.

---

## 🎯 Key Learnings

* Creating **nested loops** for pattern printing
* Validating user input
* Structuring C programs with helper functions
* Using the `cs50` library for input
