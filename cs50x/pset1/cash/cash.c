#include <cs50.h>
#include <stdio.h>
int greedy(int cents);
int get_positive_int();

int main(void)
{
    int cents = get_positive_int();
    printf("%i\n", greedy(cents));
}

int greedy(int cents)
{
    int quarters = cents / 25;
    cents = cents % 25;

    int dimes = cents / 10;
    cents = cents % 10;

    int nickels = cents / 5;
    cents = cents % 5;

    int pennies = cents;

    return quarters + dimes + nickels + pennies;
}

int get_positive_int(void)
{
    int cents;
    do
    {
        cents = get_int("Change Owed: ");
    }
    while (cents < 1);
    return cents;
}
