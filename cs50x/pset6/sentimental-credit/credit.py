def main():
    number = int(input("Number: "))
    check = alg(number)
    if check == "Valid":
        card = card_type(number)
        print(card)
    else:
        print("INVALID")


def alg(number):
    index = 0
    sum1 = 0
    sum2 = 0

    while number > 0:
        digit = number % 10

        if index % 2 == 0:
            sum2 += digit
        else:
            doubled = digit * 2
            sum1 += (doubled // 10) + (doubled % 10)
        number //= 10
        index += 1
    total = sum1 + sum2
    if total % 10 == 0:
        return "Valid"
    else:
        return "Invalid"


def card_type(number):
    length = len(str(number))

    first_two = number
    while first_two >= 100:
        first_two //= 10

    first_digit = first_two // 10

    if (first_two == 34 or first_two == 37) and length == 15:
        return "AMEX"
    elif first_digit == 4 and (length == 13 or length == 16):
        return "VISA"
    elif first_two >= 51 and first_two <= 55 and length == 16:
        return "MASTERCARD"
    else:
        return "INVALID"


main()
