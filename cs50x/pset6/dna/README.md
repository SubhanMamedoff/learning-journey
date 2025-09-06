# DNA Matching (CS50x – Problem Set 6)

This program is part of **Harvard’s CS50x Problem Set 6**.
It implements a DNA profiling tool that identifies individuals based on **short tandem repeats (STRs)** in their DNA sequence.

---

## 📌 Problem Description

The task is to compare a DNA sequence against a database of individuals and identify a **matching profile** using STR counts.

* **DNA STRs**: Short sequences of nucleotides that repeat consecutively in DNA.
* **Database**: CSV file containing names of individuals and counts of specific STRs.
* **Sequence**: Text file containing an unknown DNA sequence.

The program computes the **longest run of each STR** in the sequence and compares it with the database to find a matching individual.

---

## 🛠️ Code Overview

### 1. Command-Line Arguments

```bash
python dna.py database.csv sequence.txt
```

* `database.csv`: CSV file containing STR counts for each individual.
* `sequence.txt`: DNA sequence to be analyzed.
* Program prints the name of the individual matching the STR counts, or `"No match"` if none found.

---

### 2. `longest_match(sequence, subsequence)`

* Calculates the **longest consecutive run** of `subsequence` in the given `sequence`.
* Iterates over each character in `sequence` and counts consecutive repeats.
* Returns an integer representing the **maximum consecutive repeats**.

---

### 3. STR Analysis

* Extract STRs from the **first row of the CSV database**.
* For each STR:

  * Compute the longest run in the input DNA sequence.
  * Store results in a dictionary: `{STR: count}`.

---

### 4. Matching Against Database

* For each individual in the database:

  * Compare their STR counts with computed STR counts.
  * If all counts match, print the individual's name and exit.
  * If no matches are found, print `"No match"`.

---

## 🔹 Example Run

```
$ python dna.py databases/small.csv sequences/1.txt
Bob
```

```
$ python dna.py databases/large.csv sequences/18.txt
No match
```

---

## 📝 Reflection

Through this problem, I practiced:

* **File I/O** with CSV and text files in Python.
* **String manipulation and slicing** for DNA sequence analysis.
* Implementing **algorithmic logic** for longest consecutive subsequence detection.
* Working with **dictionaries** to store and compare STR counts.
* Handling edge cases and ensuring program robustness.