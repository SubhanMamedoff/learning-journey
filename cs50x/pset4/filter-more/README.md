# CS50x: Filter (More)

This project is part of **CS50x Problem Set 4: Filter (More)**.
The task was to implement several image filters by completing the `helpers.c` file. Other files (`bmp.h`, `filter.c`, `helpers.h`, `Makefile`) were provided.

---

## Implemented Filters

### 1. Grayscale

**Goal:** Convert the image into shades of gray.
**Approach:**

* For each pixel, I calculated the average of its red, green, and blue values.
* Then I assigned this average back to all three channels (`rgbtRed`, `rgbtGreen`, `rgbtBlue`).
* Using `round()` ensured that values were properly rounded instead of truncated.

**Key snippet:**

```c
int average = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
image[i][j].rgbtRed = average;
image[i][j].rgbtGreen = average;
image[i][j].rgbtBlue = average;
```

➡️ Result: Each pixel ends up with equal RGB values, producing grayscale.

---

### 2. Reflect

**Goal:** Flip the image horizontally (mirror effect).
**Approach:**

* For each row, I swapped pixels symmetrically around the vertical center.
* Used a temporary variable to avoid overwriting values.
* Only looped through half of the row (`width / 2`), since the second half automatically gets swapped.

**Key snippet:**

```c
RGBTRIPLE temp = image[i][j];
image[i][j] = image[i][width - 1 - j];
image[i][width - 1 - j] = temp;
```

➡️ Result: The image is reflected left-to-right, like looking in a mirror.

---

### 3. Blur

**Goal:** Apply a box blur to soften the image.
**Approach:**

* First, copied the original image to a temporary array (`copy`).
* For each pixel `(i, j)`, I considered the pixel itself and its neighbors in a 3×3 grid.
* Summed up their RGB values and divided by the count of valid neighbors.
* Wrote the averaged values back to the original image.

**Key snippet:**

```c
for (int di = -1; di <= 1; di++)
{
    for (int dj = -1; dj <= 1; dj++)
    {
        int ni = i + di;
        int nj = j + dj;

        if (ni >= 0 && ni < height && nj >= 0 && nj < width)
        {
            totalRed += copy[ni][nj].rgbtRed;
            totalGreen += copy[ni][nj].rgbtGreen;
            totalBlue += copy[ni][nj].rgbtBlue;
            count++;
        }
    }
}
image[i][j].rgbtRed = round((float) totalRed / count);
```

➡️ Result: Each pixel’s color is smoothed based on its neighbors, creating a blur effect.

---

### 4. Edges

**Goal:** Detect edges using the **Sobel operator**.
**Approach:**

* Defined two 3×3 matrices `Gx` and `Gy` to detect horizontal and vertical changes.
* For each pixel, multiplied neighboring values by the kernel coefficients.
* Computed `sqrt(Gx² + Gy²)` for each color channel.
* Capped values at `255` to stay within RGB limits.

**Key snippet:**

```c
int red = round(sqrt(gx_red * gx_red + gy_red * gy_red));
if (red > 255)
{
    red = 255;
}
image[i][j].rgbtRed = red;
```

➡️ Result: Bright lines highlight areas with strong color intensity changes, marking edges.

---

## File Structure

```
filter-more/
│── bmp.h        # Bitmap file format definitions (provided)
│── filter.c     # Main program logic (provided)
│── helpers.h    # Function declarations (provided)
│── helpers.c    # My implementation of the filters
│── Makefile     # Build configuration (provided)
```

---

## Usage

1. **Compile the program:**

   ```bash
   make filter
   ```

2. **Run the program with a filter option:**

   ```bash
   ./filter -g input.bmp output.bmp   # Grayscale
   ./filter -r input.bmp output.bmp   # Reflect
   ./filter -b input.bmp output.bmp   # Blur
   ./filter -e input.bmp output.bmp   # Edges
   ```

3. **Example:**

   ```bash
   ./filter -e images/yard.bmp output.bmp
   ```

---

## Skills Demonstrated

* **C Programming**: working with 2D arrays, pointers, loops, conditionals.
* **Image Processing**: grayscale conversion, reflection, blurring, edge detection.
* **Algorithms**: implemented the Sobel operator and neighborhood averaging.
* **Problem-Solving**: translated mathematical formulas into working C code.