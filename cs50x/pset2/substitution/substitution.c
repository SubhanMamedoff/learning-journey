#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void ciphering(string plaintext, string key, char ciphertext[]);
bool is_alpha(string key);
bool isrepeated(string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else if (!is_alpha(argv[1]))
    {
        printf("Key must only contain alphabetic characters.\n");
        return 1;
    }
    else if (isrepeated(argv[1]))
    {
        printf("Key must not contain repeated characters.\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext:  ");
        char ciphertext[strlen(plaintext) + 1];
        ciphering(plaintext, argv[1], ciphertext);
        printf("ciphertext:   ");
        for (int i = 0; i < strlen(ciphertext); i++)
        {
            printf("%c", ciphertext[i]);
        }
        printf("\n");
    }
}

void ciphering(string plaintext, string key, char ciphertext[])
{
    char alphabetupper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char alphabetlower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int len = 0;
    for (int i = 0; i < strlen(plaintext); i++)
    {
        bool matched = false;
        for (int j = 0; j < 26; j++)
        {
            if (plaintext[i] == alphabetupper[j])
            {
                ciphertext[len++] = toupper(key[j]);
                matched = true;
                break;
            }
            else if (plaintext[i] == alphabetlower[j])
            {
                ciphertext[len++] = tolower(key[j]);
                matched = true;
                break;
            }
        }
        if (!matched)
        {
            ciphertext[len++] = plaintext[i];
        }
    }
    ciphertext[len] = '\0';
}
bool is_alpha(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    }
    return true;
}

bool isrepeated(string key)
{
    bool seen[26] = {false};
    for (int i = 0; i < 26; i++)
    {
        char c = tolower(key[i]);
        int index = c - 'a';
        if (seen[index])
        {
            return true;
        }

        seen[index] = true;
    }
    return false;
}
