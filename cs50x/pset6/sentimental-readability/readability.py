from math import *


def main():
    text = input("Text: ")
    length = len(text)
    letters = count_letters(text, length)
    words = count_words(text, length)
    sentences = count_sentences(text, length)
    L = float(letters / words * 100)
    S = float(sentences / words * 100)
    index = 0.0588 * L - 0.296 * S - 15.8
    grade = round(index)

    if grade < 1:
        print("Before Grade 1")
    elif grade >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {grade}")


def count_letters(text, length):
    letters = 0
    for i in range(length):
        if text[i].isalpha():
            letters += 1
    return letters


def count_words(text, length):
    words = 1
    for i in range(length):
        if text[i] == ' ':
            words += 1
    return words


def count_sentences(text, length):
    sentences = 0
    for i in range(length):
        if text[i] == '.' or text[i] == '!' or text[i] == '?':
            sentences += 1
    return sentences


main()
