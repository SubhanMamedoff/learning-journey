# CS50x – Problem Set 5: Inheritance

This project simulates **genetic inheritance of blood types** across multiple generations. The goal was to implement a **family tree structure** in C using **structs and pointers** to model inheritance patterns.

---

## 🧬 Overview

* Each person has:

  * Two **parents** (pointers to `person` structs)
  * Two **alleles** representing blood type (`A`, `B`, or `O`)

* The program recursively generates a family tree up to a predefined number of generations.

* Blood type alleles of a child are **randomly inherited** from their parents.

* Dynamic memory is used for all `person` structs, and proper **memory deallocation** is implemented to avoid leaks.

---

## 📂 Files

* `inheritance.c` – Main program handling:

  * Family tree creation (`create_family`)
  * Printing family tree (`print_family`)
  * Freeing memory (`free_family`)
  * Random allele generation (`random_allele`)

---

## ⚙️ How It Works

1. **Family Creation**

   * `create_family(int generations)` recursively creates a family tree.
   * Base case: oldest generation is assigned random alleles.
   * Recursive case: a person inherits one allele from each parent.

2. **Print Family Tree**

   * `print_family(person *p, int generation)` prints each family member with proper indentation.
   * Supports labeling as "Child", "Parent", and "Grandparent" with generational depth.

3. **Memory Management**

   * `free_family(person *p)` recursively frees memory allocated for all ancestors.

4. **Random Allele Selection**

   * `random_allele()` chooses `'A'`, `'B'`, or `'O'` randomly for founders of the family tree.

---

## 💻 Example Usage

Compile the program:

```bash
make
```

Run the program:

```bash
./inheritance
```

Sample output:

```
Child (Generation 0): blood type AB
    Parent (Generation 1): blood type AO
        Grandparent (Generation 2): blood type AA
        Grandparent (Generation 2): blood type BO
    Parent (Generation 1): blood type AB
        Grandparent (Generation 2): blood type AB
        Grandparent (Generation 2): blood type OO
```

---

## ✅ Key Skills Demonstrated

* **Structs & Pointers**: Using pointers to model parent-child relationships.
* **Recursion**: Generating and traversing the family tree.
* **Dynamic Memory Management**: Allocating and freeing memory safely.
* **Simulation of Genetic Inheritance**: Randomized inheritance of traits.
* **Formatted Output**: Generational indentation for clear visual hierarchy.