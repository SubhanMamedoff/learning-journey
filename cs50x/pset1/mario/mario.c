#include <cs50.h>
#include <stdio.h>
int get_positive_int(void);

int main(void)
{
    int height = get_positive_int();
    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        for (int b = 0; b < 2; b++)
        {
            printf(" ");
        }
        for (int d = 0; d <= i; d++)
        {
            printf("#");
        }

        printf("\n");
    }
}
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    return n;
}
