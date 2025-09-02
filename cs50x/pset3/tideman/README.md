# Tideman (Ranked Pairs Election)

This problem is part of **Harvard's CS50x – Problem Set 3**.  
The task was to implement the **Tideman voting system** (also known as ranked pairs), a ranked-choice election algorithm that ensures the winner is determined without cycles.

---

## 📌 Problem Description

In a **Tideman election**, voters rank candidates by preference.  
The system records **pairwise preferences** between candidates and locks in victories from strongest to weakest, avoiding cycles to determine a single winner.

### Key Concepts
- **Pairwise comparison:** Count how many voters prefer candidate A over candidate B.  
- **Strength of victory:** The margin by which one candidate is preferred over another.  
- **Locked graph:** A directed graph where an edge from A → B indicates that A is preferred over B.  
- **Cycle prevention:** Ensures that locking in a new pair does not create a circular ranking, which would invalidate the results.  

---

## 🛠️ Functions Implemented

### 1. `vote`
- Record a voter's ranking for a candidate.  
- Updates the `ranks` array with the candidate index.  
- Returns `true` if the vote is valid; otherwise, `false`.

### 2. `record_preferences`
- Update the `preferences` matrix based on a single voter's ranks.  
- For each voter, increment `preferences[i][j]` for all candidate pairs where candidate `i` is preferred over `j`.

### 3. `add_pairs`
- Generate the `pairs` array, storing all candidate pairs where one is preferred over the other.  
- Only include pairs with a clear preference (no ties).

### 4. `sort_pairs`
- Sort the `pairs` array in **descending order by strength of victory**.  
- Strength is calculated as:  


preferences\[winner]\[loser] - preferences\[loser]\[winner]


- Sorting ensures the strongest victories are locked first.

### 5. `lock_pairs`
- Lock pairs into the `locked` graph in order of decreasing strength.  
- Before locking a pair, check with `iscycle` to avoid creating a cycle in the graph.

### 6. `print_winner`
- Identify the **source** of the graph (a candidate with no edges pointing to them).  
- The source is the winner of the election.  
- Handles cases with multiple candidates, but ensures only one winner due to cycle prevention.

### 7. `iscycle`
- Recursive helper function used to detect cycles in the graph.  
- Prevents invalid locking of pairs that would create circular preferences.

---

## 🔹 Approach & Implementation Details

1. **Input Handling**
 - Prompt the user for the number of voters and candidate names.  
 - For each voter, record ranked preferences in an array.

2. **Preference Recording**
 - Convert voter rankings into a `preferences` matrix representing pairwise victories.

3. **Pair Generation**
 - Compare all candidates to create pairs of winners and losers.  
 - Count only clear victories (ignore ties).

4. **Sorting**
 - Sort pairs by **margin of victory** (strongest wins first).  
 - This ensures that the final graph reflects the strongest preferences.

5. **Graph Locking**
 - Sequentially lock pairs into the `locked` graph.  
 - Use recursive cycle detection (`iscycle`) to ensure acyclic locking.

6. **Winner Determination**
 - The candidate with **no incoming edges** in the locked graph is declared the winner.  
 - This guarantees the election produces a single, valid winner.

---

## 🚀 How to Compile and Run

```
make tideman
./tideman Alice Bob Charlie
```

* Enter the number of voters.
* Each voter provides ranked preferences for all candidates.
* The program prints the winner after processing all pairs.

**Example:**

```
Number of voters: 3
Rank 1: Alice
Rank 2: Charlie
Rank 3: Bob

Rank 1: Bob
Rank 2: Alice
Rank 3: Charlie

Rank 1: Charlie
Rank 2: Bob
Rank 3: Alice

Winner:
Alice
```

---

## 📝 Reflection & Learning

Through implementing the Tideman algorithm, I learned:

* **Graph algorithms in C:** Building and traversing a directed graph with cycle detection.
* **Ranked-choice election mechanics:** How to record and process voter preferences.
* **Recursive logic:** Using recursion for cycle detection (`iscycle`).
* **Algorithmic thinking:** Translating complex election rules into clear, maintainable code.
* **Debugging & testing:** Ensuring all edge cases (ties, multiple candidates, maximum limits) are handled correctly.

This problem reinforced both **data structure skills** (arrays, structs, matrices, and graphs) and **algorithmic problem-solving** in a real-world inspired scenario.
