# CS50x: Recover

This project is part of **CS50x Problem Set 4: Recover**.
The goal of this problem was to **recover JPEG images** from a raw memory card file by analyzing its binary contents.

---

## Problem Description

Digital cameras often store photos on memory cards in the form of JPEG files. When such a memory card is accidentally erased or corrupted, the data may still remain, but without proper file headers and structures.

In this assignment, the task was to write a program (`recover.c`) that:

* Reads through a raw memory card file.
* Identifies the start of each JPEG file by recognizing its signature (magic numbers).
* Recovers and writes each image to a separate `.jpg` file.

---

## Implementation Details

### JPEG Header Detection

JPEG files start with the following byte pattern (signature):

```
0xff 0xd8 0xff 0xe0 ... 0xef
```

In code:

```c
if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
    (buffer[3] & 0xf0) == 0xe0)
```

➡️ This checks if the first three bytes are always `0xff 0xd8 0xff`, and the fourth byte is between `0xe0` and `0xef`.

---

### Block Reading

* Data is read in **512-byte blocks** using a buffer:

```c
uint8_t buffer[512];
while (fread(buffer, 1, 512, card) == 512)
```

* This simulates how data is stored on memory cards (sector by sector).

---

### File Management

* Each time a new JPEG header is found, the program:

  1. Closes the previously open image file (if any).
  2. Creates a new filename (`000.jpg`, `001.jpg`, …).
  3. Opens a new file and starts writing blocks into it.
* If no new header is found, the block is appended to the **currently open image**.

```c
sprintf(filename, "%03i.jpg", count);
img = fopen(filename, "w");
fwrite(buffer, 512, 1, img);
count++;
```

---

### Closing Files

* At the end, both the memory card (`card`) and the last image (`img`) are properly closed to avoid memory leaks and corruption.

---

## Usage

1. **Compile the program:**

   ```bash
   make recover
   ```

2. **Run with a raw memory card file:**

   ```bash
   ./recover card.raw
   ```

3. **Output:**

   * The program will generate files like:

     ```
     000.jpg
     001.jpg
     002.jpg
     ...
     ```
   * Each file is one of the recovered JPEGs.

---

## Example Workflow

```bash
$ ./recover memorycard.raw
$ ls
000.jpg  001.jpg  002.jpg  003.jpg
```

---

## Skills Demonstrated

* **File I/O in C** (`fopen`, `fread`, `fwrite`, `fclose`).
* **Binary data handling** with `uint8_t` and fixed-size buffers.
* **Low-level understanding of JPEG headers**.
* **Robust resource management** (avoiding memory leaks, safe file handling).
