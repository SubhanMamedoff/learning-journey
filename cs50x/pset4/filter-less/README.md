# CS50x – Problem Set 4: Filter-less

This program applies **basic image filters** to BMP images.  
It is part of **Problem Set 4** in Harvard's CS50x course.  

In this problem, a `filter.c` file was provided. The task was to implement the helper functions in `helpers.c`:

- `grayscale`
- `sepia`
- `reflect`
- `blur`

---

## 📌 Problem Description

The goal is to manipulate BMP images using four different filters:

1. **Grayscale** – Convert a color image to shades of gray by averaging RGB values.  
2. **Sepia** – Apply a sepia tone effect using weighted sums of RGB channels.  
3. **Reflect** – Mirror the image horizontally.  
4. **Blur** – Apply a box blur to smooth the image by averaging neighboring pixels.  

The program reads an input BMP image, applies the selected filter, and writes the result to a new BMP file.

---

## 🛠️ Approach & Implementation Details

### 1. Grayscale
- Iterate over each pixel in the image.  
- Compute the average of `rgbtRed`, `rgbtGreen`, and `rgbtBlue`.  
- Set all three channels to this average value.

### 2. Sepia
- For each pixel, calculate:
```

sepiaRed   = 0.393*R + 0.769*G + 0.189*B
sepiaGreen = 0.349*R + 0.686*G + 0.168*B
sepiaBlue  = 0.272*R + 0.534*G + 0.131*B

````
- Cap each value at 255.  
- Update the pixel with the new sepia values.

### 3. Reflect
- Swap pixels horizontally across the vertical center of the image.  
- Use a temporary variable to avoid overwriting pixels.  
- Iterates only halfway across each row.

### 4. Blur
- Create a **copy of the original image** to avoid modifying pixels while processing neighbors.  
- For each pixel, average the RGB values of the pixel and its surrounding neighbors (up to 3x3 block).  
- Assign the averaged values back to the original image.

---

## 🔹 Key Concepts Practiced

- **2D arrays**: Iterating over image rows and columns  
- **Structs**: Working with `RGBTRIPLE` to manipulate pixel data  
- **Nested loops**: Processing neighboring pixels for blur effect  
- **Mathematical operations**: Averaging and weighted sums for filters  
- **Image processing fundamentals**: Grayscale, sepia, reflection, and blur  

---

## 🚀 How to Compile and Run

```
make filter      # Compile the program (filter.c + helpers.c)

# Apply filters using command-line flags:
./filter -g images/yard.bmp out.bmp    # Apply grayscale filter
./filter -s images/yard.bmp out.bmp    # Apply sepia filter
./filter -r images/yard.bmp out.bmp    # Apply horizontal reflection
./filter -b images/yard.bmp out.bmp    # Apply blur effect
```

* `-g` → grayscale
* `-s` → sepia
* `-r` → reflect
* `-b` → blur
* `images/yard.bmp` → path to the original BMP image
* `out.bmp` → path for the filtered image

---

## 📝 Reflection

This problem strengthened my understanding of:

* **Image representation in memory**: Using 2D arrays to access pixels
* **Color manipulation**: Computing averages and weighted sums for visual effects
* **Memory safety**: Using a copy for the blur function to prevent modifying neighbors prematurely
* **Modular programming**: Separating helper functions from main program logic
* **Problem decomposition**: Translating real-world image transformations into code
