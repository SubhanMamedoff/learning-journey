# CS50x – Problem Set 5

This directory contains my solutions for **Problem Set 5** of Harvard’s CS50x course.
The set focuses on **data structures, memory management, and file handling** in C.

All problems were implemented in **C**, using **structs, pointers, arrays, and dynamic memory** where appropriate. 

---

## 📂 Problem Set 5 Projects

1. **Inheritance** – Simulates object-oriented inheritance using **structs in C**, demonstrating polymorphism and code reuse.

   * Implemented multiple structs and function pointers to mimic class behavior.
   * Explored **composition and encapsulation** in C.
   * Folder: [`inheritance`](./inheritance/)

2. **Speller** – Implements a **spell checker** using a **hash table** for efficient dictionary storage and word lookup.

   * Supports fast insertion and lookup of thousands of words.
   * Handles **dynamic memory allocation** safely with proper free operations.
   * Folder: [`speller`](./speller/)

---

## ⚡ How to Compile and Run

Each problem has its own folder and a **Makefile** for compilation.

```bash
cd inheritance
make
./inheritance [arguments]

cd ../speller
make
./speller [dictionary_file] [text_file]
```

---

## ✅ Key Skills Demonstrated

* **Structs & Pointers**: Advanced use for data organization and polymorphic behavior (`inheritance`).
* **Hash Tables**: Efficient word storage and retrieval (`speller`).
* **Dynamic Memory Management**: malloc/free and prevention of memory leaks.
* **File I/O**: Reading and processing files at byte and string level.
* **Algorithm Design**: Optimized search, insert, and memory operations.
