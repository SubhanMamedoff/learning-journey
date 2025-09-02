# CS50x – Problem Set 4: Audio and File Manipulation

This directory contains my solutions to **Problem Set 4** of Harvard's CS50x (Introduction to Computer Science) course.  
Problem Set 4 focuses on **audio processing** and **file manipulation**, reinforcing skills in arrays, pointers, and working with binary data in C. 

---

## 📂 Project Overview

This problem set includes **four main problems**, each with its own folder containing source code and documentation:

1. **[Volume](volume/)** – Modify the volume of a WAV file.  
2. **[Filter-less](filter-less/)** – Apply a low-pass filter to an image.  
3. **[Filter-more](filter-more/)** – Apply more advanced image filters (e.g., edge detection, blur).  
4. **[Recover](recover/)** – Recover JPEGs from a forensic image.

Each folder contains:
- The **C source code** (`*.c`)  
- Example input/output files if applicable  
- A **README** detailing the problem, approach, and functionality

---

## 🔹 Problem Details and Approaches

### 1. Volume
- **Objective:** Adjust the volume of a WAV audio file.  
- **Approach:**  
  - Read WAV headers and sample data.  
  - Multiply each sample by a **volume factor** (float).  
  - Write the modified samples to a new WAV file.  
- **Concepts Practiced:** File I/O, binary data manipulation, typecasting, arrays.

### 2. Filter-less
- **Objective:** Apply a basic low-pass filter to an image (BMP).  
- **Approach:**  
  - Read image pixel data into a 2D array.  
  - Modify RGB values based on simple averaging.  
  - Write the modified pixels back to a new image.  
- **Concepts Practiced:** 2D arrays, nested loops, struct manipulation, pointers.

### 3. Filter-more
- **Objective:** Implement more advanced image filters, such as edge detection or blur.  
- **Approach:**  
  - Implement convolution kernels for different effects.  
  - Apply kernels to each pixel while handling edges and boundaries.  
  - Output filtered images.  
- **Concepts Practiced:** 2D convolution, image processing, boundary checking, mathematical operations on pixel data.

### 4. Recover
- **Objective:** Recover JPEG images from a forensic memory image.  
- **Approach:**  
  - Read the memory card in **512-byte blocks**.  
  - Detect JPEG signatures to identify file starts.  
  - Write recovered files sequentially with proper naming (`000.jpg`, `001.jpg`, ...).  
- **Concepts Practiced:** File I/O, byte-level data processing, pattern recognition, loops, and conditionals.

---

## 🛠️ Key Concepts Practiced
- **File manipulation:** Reading and writing binary files, WAV/BMP formats  
- **Audio processing:** Sample scaling, typecasting, data integrity  
- **Image processing:** 2D arrays, convolution, RGB channel manipulation  
- **Memory and pointers:** Efficient access and modification of arrays  
- **Problem-solving:** Translating real-world tasks into structured C programs

---

## 🚀 How to Compile and Run
For each problem, navigate to its folder and compile the program:

```
cd volume       # or filter-less, filter-more, recover
make <program>  # e.g., make volume
./<program>     # Follow the prompts for input files and parameters
```

* Each program provides instructions on input files and expected outputs.
* For image/audio problems, output files can be viewed with standard software (image viewer, audio player).

---

## 📝 Reflection

This problem set strengthened my understanding of:

* **Binary file I/O and formats**: Working with WAV and BMP files
* **Audio and image processing algorithms**: Scaling samples, filtering pixels, detecting file signatures
* **2D arrays and pointer manipulation**: Efficiently processing large datasets
* **Debugging low-level data operations**: Ensuring no data corruption while reading/writing files
* **Problem decomposition**: Breaking tasks into modular functions for maintainability and clarity
