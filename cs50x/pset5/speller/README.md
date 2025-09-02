# Speller (CS50x – Problem Set 5)

This project is part of **Harvard's CS50x – Problem Set 5**.
The task was to implement a **high-performance spell-checking program**, capable of efficiently verifying words against a dictionary while handling large datasets.

---

## 📌 Problem Description

In **Speller**, the program must:

* Read words from a **text file**.
* Check each word against a **dictionary**.
* Count **misspelled words**.
* Track runtime and efficiency for large input files.

### Key Concepts

* **Hash tables:** For efficient storage and lookup of dictionary words.
* **Linked lists:** Handle hash collisions and store words dynamically.
* **Dynamic memory management:** Allocate and free memory for dictionary nodes.
* **Case-insensitive comparison:** Words should match regardless of capitalization.

---

## 🛠️ Functions Implemented in `dictionary.c`

### 1. `load`

* Loads words from a dictionary file into memory.
* Uses a **hash table** with `N = 26` buckets.
* Inserts each word into a linked list at its hashed index.
* Returns `true` if successful, `false` if loading fails.

### 2. `check`

* Checks if a word exists in the dictionary.
* Traverses the linked list in the hashed bucket.
* Comparison is **case-insensitive** using `strcasecmp`.
* Returns `true` if word exists, `false` otherwise.

### 3. `size`

* Returns the number of words currently loaded in memory.
* Uses a **global counter** updated during `load`.

### 4. `unload`

* Frees all memory allocated for the dictionary.
* Iterates over each bucket and linked list node, calling `free`.
* Returns `true` if all memory is successfully freed.

### 5. `hash`

* Maps a word to an integer index `[0, N-1]`.
* Algorithm: Sum of ASCII values (uppercase) of letters + word length, modulo `N`.
* Ensures **reasonable distribution** across buckets to minimize collisions.

---

## 🔹 Approach & Implementation Details

1. **Data Structure**

* **Hash table:** Array of linked lists, each node storing a word.
* **Collision handling:** Chaining via linked lists.

2. **Memory Management**

* Dynamic allocation for each dictionary word.
* `unload` ensures no memory leaks.

3. **Word Lookup**

* Hash function determines bucket.
* Traverse linked list for match.
* Efficient O(1) average-case lookup.

4. **Performance Considerations**

* Fast lookups even with large dictionaries.
* Minimal memory overhead using linked lists.
* Global counter avoids traversal for `size()` function.

---

## 🚀 How to Compile and Run

Compile using the provided Makefile:

```bash
make speller
```

Run the program with a dictionary and text file:

```bash
./speller dictionaries/large texts/grimm.txt
```

**Output:**

* Total words in text.
* Number of misspelled words.
* Runtime of the spell-checking operation.

---

## 📝 Reflection & Learning

Implementing Speller reinforced:

* **Hash tables and collision handling** in C.
* **Linked lists and dynamic memory management**.
* Efficient **string manipulation and case-insensitive comparison**.
* **Algorithm optimization** for large-scale text processing.
* Debugging and handling **edge cases** (empty files, unknown words, large dictionaries).