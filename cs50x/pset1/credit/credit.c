#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

string alg(long number);
string card_type(long number);
int intlen(long number);

int main(void)
{

    long number = get_long("Number: ");
    string check = alg(number);
    if (strcmp(check, "Valid") == 0)
    {
        string card = card_type(number);
        printf("%s\n", card);
    }

    else
    {
        printf("INVALID\n");
    }
}

string alg(long number)
{

    int index = 0;
    int sum1 = 0;
    int sum2 = 0;
    while (number > 0)
    {
        int digit = number % 10;

        if (index % 2 == 0)
        {
            sum2 += digit;
        }

        else
        {
            int doubled = digit * 2;
            sum1 += (doubled / 10) + (doubled % 10);
        }
        number /= 10;
        index++;
    }
    int total = sum1 + sum2;
    if (total % 10 == 0)
    {
        return "Valid";
    }

    else
    {
        return "Invalid";
    }
}

string card_type(long number)
{
    int length = intlen(number);

    long first_two = number;
    while (first_two >= 100)
    {
        first_two /= 10;
    }

    long first_digit = first_two / 10;

    if ((first_two == 34 || first_two == 37) && length == 15)
    {
        return "AMEX";
    }
    else if (first_two >= 51 && first_two <= 55 && length == 16)
    {
        return "MASTERCARD";
    }
    else if (first_digit == 4 && (length == 13 || length == 16))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}

int intlen(long number)
{
    int sayac = 0;

    if (number == 0)
    {
        sayac = 1;
    }

    else
    {
        for (; number != 0; number /= 10)
        {
            sayac++;
        }
    }

    return sayac;
}
