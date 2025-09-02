CS50x – Problem Set 4: Volume

This program modifies the **volume of a WAV audio file** by scaling its samples with a user-provided factor.  
It is part of **Problem Set 4** in Harvard's CS50x course.

---

## 📌 Problem Description

The goal is to **increase or decrease the volume** of a given `.wav` file.  

- The WAV format contains a **44-byte header**, followed by 16-bit PCM samples.  
- The program reads the input file, scales each sample by a **volume factor**, and writes the result to a new output file.  
- Users provide:  
  1. Input WAV filename  
  2. Output WAV filename  
  3. Volume factor (e.g., `0.5` for half volume, `2.0` for double volume)

---

## 🛠️ Approach & Implementation Details

1. **Command-line validation**  
   - Ensure exactly 3 arguments are provided.  
   - Print usage instructions if arguments are missing.

2. **File handling**  
   - Open the input WAV file for reading.  
   - Open/create the output WAV file for writing.  
   - Handle errors if files cannot be opened.

3. **Read and write WAV header**  
   - Copy the **44-byte header** from input to output.  
   - Header is not modified, ensuring output remains a valid WAV file.

4. **Process audio samples**  
   - Read each **16-bit sample** from input.  
   - Multiply the sample by the **volume factor**.  
   - Write the scaled sample to the output file.  
   - Loop continues until end of file is reached.

5. **Close files**  
   - Ensure all files are properly closed to prevent data loss.

---

## 🔹 Key Concepts Practiced

- **Binary file I/O**: Reading and writing bytes from files in C  
- **Audio processing**: Scaling PCM samples to adjust volume  
- **Typecasting and data types**: Using `int16_t` for 16-bit samples  
- **Command-line arguments**: Handling user input and validation  
- **Error handling**: Checking file operations and invalid input

---

## 🚀 How to Compile and Run

```
make volume       # Compile the program
./volume input.wav output.wav 2.0  # Double the volume
./volume input.wav output.wav 0.5  # Reduce the volume by half
```

* `input.wav`: Path to the original audio file
* `output.wav`: Path for the modified audio file
* `factor`: Float value for scaling volume

---

## 📝 Reflection

This problem strengthened my understanding of:

* **Binary file manipulation**: Handling headers and 16-bit audio data correctly
* **Audio signal processing**: Applying mathematical operations to audio samples
* **Low-level C programming**: Working with pointers, typecasting, and `stdint.h` types
* **Robust coding**: Implementing error handling for file operations and input validation
