# Plurality

This problem is part of **Harvard's CS50x – Problem Set 3**.  
The task was to implement a **simple plurality voting system**, where voters cast votes for candidates and the candidate(s) with the most votes win.

---

## 📌 Problem Description
You were provided with:
- Starter code including:
  - Candidate data structures (`candidate` struct)  
  - Input handling (reading candidate names and voter count)  
  - Main program structure  

Your task:
1. Implement the **`vote`** function:  
   - Updates the vote total for a candidate given their name.  
   - Returns `true` if the vote is valid, `false` otherwise.
2. Implement the **`print_winner`** function:  
   - Determines the candidate(s) with the highest vote count.  
   - Prints the winner(s) to the console.  

**Constraints:**
- Maximum number of candidates: 9  
- Handle ties (multiple winners)

---

## 🛠️ Approach
- For **`vote`**:
  - Loop through the candidates array.  
  - Compare each candidate’s name to the voter input using `strcmp`.  
  - Increment vote count for matching candidate.
- For **`print_winner`**:
  - First, find the highest vote count among all candidates.  
  - Then, loop again to print all candidates with that vote count.  
- All other functionality (input handling, candidate initialization) was provided.

---

## 🚀 How to Compile and Run
1. Compile the program:
   ```
   make plurality
   ```

2. Run the program with candidate names as command-line arguments:

   ```
   ./plurality Alice Bob Charlie
   ```
3. Enter the number of voters and cast votes:

   ```
   Number of voters: 5
   Vote: Alice
   Vote: Bob
   Vote: Charlie
   Vote: Alice
   Vote: Bob
   ```
4. Program outputs the winner(s):

   ```
   Alice
   Bob
   ```

---

## 📝 Reflection

Through this problem I learned:

* How to **search and update data in an array of structs**.
* How to handle **dynamic input and validation**.
* How to implement logic for **ties and determining maximum values**.
* The importance of **breaking the problem into functions** for readability and maintainability.
