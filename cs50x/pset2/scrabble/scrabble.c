#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int compute(string input);
int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    char playerone[strlen(player1) + 1];
    char playertwo[strlen(player2) + 1];
    strcpy(playerone, player1);
    strcpy(playertwo, player2);
    int p1_score = compute(playerone);
    int p2_score = compute(playertwo);

    if (p1_score > p2_score)
    {
        printf("Player 1 wins\n");
    }
    else if (p2_score > p1_score)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
int compute(string input)
{
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int values[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; // array
    string word = input;
    int word_size = strlen(word);
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int toplam = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isalpha(input[i]))
        {
            continue;
        }
        input[i] = toupper(input[i]);
    }
    for (int i = 0; i < word_size; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            if (word[i] == arr[j])
            {
                toplam += values[j];
                break;
            }
        }
    }

    return toplam;
}
