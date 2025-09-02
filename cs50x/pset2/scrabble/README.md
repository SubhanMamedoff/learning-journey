# Scrabble

This program is a solution to the **Scrabble problem** from **CS50x Problem Set 2**.  
It simulates a simple version of the Scrabble game, where two players enter words, and the program calculates their scores based on letter values.

---

## Description
- Each player enters a word.
- The program assigns a score to each letter using the traditional **Scrabble letter values**.
- Scores are compared, and the winner is announced.
- If both players have the same score, the game ends in a tie.

---

## Letter Values
The following values are used for each letter:

| Letter | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q  | R | S | T | U | V | W | X | Y | Z  |
|--------|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|----|---|---|---|---|---|---|---|---|----|
| Points | 1 | 3 | 3 | 2 | 1 | 4 | 2 | 4 | 1 | 8 | 5 | 1 | 3 | 1 | 1 | 3 | 10 | 1 | 1 | 1 | 1 | 4 | 4 | 8 | 4 | 10 |

---

## How to Run
1. Compile the program:
```bash
make scrabble
````

2. Run the program:

```bash
./scrabble
```

3. Enter the words for each player when prompted.

---

## Example Interaction

```bash
$ ./scrabble
Player 1: Question?
Player 2: Answer!
Player 1 wins
```

```bash
$ ./scrabble
Player 1: CAT
Player 2: DOG
Tie!
```

---

## Concepts Practiced

* **Arrays** for storing letters and values
* **Strings** and character manipulation
* **ASCII handling** with `toupper()` and `isalpha()`
* **Nested loops** for letter scoring
* **Conditionals** for determining the winner
