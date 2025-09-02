#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string key);
char rotate(char c, int n);
int main(int argc, string argv[])
{
    if (argc == 2 && only_digits(argv[1]))
    {
        int key = atoi(argv[1]);
        string plaintext = get_string("plaintext:  ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            char rotated = rotate(plaintext[i], key);
            printf("%c", rotated);
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

bool only_digits(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (isalpha(c))
    {
        if (isupper(c))
        {
            char formule = ('A' + ((c - 'A' + n) % 26));
            return formule;
        }

        else if (islower(c))
        {
            char formule = ('a' + ((c - 'a' + n) % 26));
            return formule;
        }
    }
    else
    {
        return c;
    }
    return c;
}
