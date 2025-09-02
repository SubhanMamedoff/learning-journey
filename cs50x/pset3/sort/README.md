# Sort

This problem is part of **Harvard's CS50x – Problem Set 3**.  
Unlike typical programming problems, the task here was **not to write code**, but to **analyze given sorting programs** and determine which sorting algorithm each program implements.

---

## 📌 Problem Description
You were provided with:
- Pre-written sorting programs: `sort1`, `sort2`, `sort3`  
- Various input files containing lists of numbers (random, reversed, and already sorted)

Your task:
1. Run each program on the different input files.  
2. Measure the **execution time** using the `time` command.  
3. Determine which **sorting algorithm** each program uses based on the timing results and behavior of the sort.  
4. Record your conclusions in `answer.txt`.

---

## 🛠️ Approach
- I tested **random, reversed, and sorted input files** of size 10,000.  
- Observed the execution time differences for each program.  
- Compared performance patterns with known characteristics of sorting algorithms:
  - **Bubble sort** → very slow on reversed and random data, faster on sorted data.  
  - **Merge sort** → consistently fast regardless of input order.  
  - **Selection sort** → slower than merge sort, consistent with a simple selection-based approach.

---

## 📄 Results
The results of the analysis are documented in the file [answer.txt](answer.txt). Please refer to that file for details on which program uses which sorting algorithm.

---

## 📝 Reflection
Through this problem I learned:
- How to **analyze algorithm performance** empirically using timing tests.  
- How to identify sorting algorithms based on their **time complexity and input behavior**.  
- The importance of **comparing multiple implementations** to draw accurate conclusions.  
- This exercise reinforced the difference between **theoretical complexity** and **practical runtime observations**.
