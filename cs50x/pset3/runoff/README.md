# Runoff

This problem is part of **Harvard's CS50x – Problem Set 3**.  
The task was to implement a **runoff election system**, where voters rank candidates by preference, and candidates are eliminated in rounds until a winner is determined.

---

## 📌 Problem Description
You were provided with:
- Starter code including:
  - Candidate data structures (`candidate` struct)  
  - Input handling (reading candidate names and voter count)  
  - Main program structure and loop for multiple runoff rounds  

Your task was to implement the following functions:

1. **`vote`** – Record a voter’s rank for a candidate.  
2. **`tabulate`** – Count votes for non-eliminated candidates based on voters’ preferences.  
3. **`print_winner`** – Print the winner if a candidate has more than half of the votes.  
4. **`find_min`** – Find the minimum number of votes among non-eliminated candidates.  
5. **`is_tie`** – Check if the election is tied between all remaining candidates.  
6. **`eliminate`** – Eliminate candidate(s) with the minimum number of votes.

**Constraints:**
- Maximum voters: 100  
- Maximum candidates: 9  
- Must handle ties and multiple rounds of elimination correctly

---

## 🛠️ Approach
- **`vote`**: Iterate over candidates to find a match for the voter’s input, then store the index in `preferences`.  
- **`tabulate`**: For each voter, add one vote to their highest-ranked non-eliminated candidate.  
- **`print_winner`**: Check if any candidate has more than half of the total votes; if so, print their name.  
- **`find_min`**: Identify the smallest vote count among remaining candidates.  
- **`is_tie`**: Verify if all non-eliminated candidates have the same vote count.  
- **`eliminate`**: Mark candidates with the minimum vote count as eliminated.

---

## 🚀 How to Compile and Run
1. Compile the program:
   ```
   make runoff
   ```

2. Run the program with candidate names as command-line arguments:

   ```
   ./runoff Alice Bob Charlie
   ```
3. Enter the number of voters and each voter’s ranked preferences:

   ```
   Number of voters: 5
   Rank 1: Alice
   Rank 2: Bob
   Rank 3: Charlie
   ```
4. The program will perform runoff rounds and print the winner(s).

---

## 📝 Reflection

Through this problem I learned:

* How to implement **ranked-choice voting** logic.
* How to **track and update votes across multiple rounds** efficiently.
* How to handle **ties and candidate elimination** properly.
* The importance of **breaking the program into clear functions** for readability and maintainability.
* Strengthened understanding of **arrays, structs, and nested loops** in C.
