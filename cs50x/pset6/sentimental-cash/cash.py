from cs50 import get_float


def get_cents():
    while True:
        cents = get_float("Change: ")
        if cents < 0:
            continue
        else:
            return int(round(cents * 100))


def main(cents):
    print(greedy(cents))


def greedy(cents):
    quarters = cents // 25
    cents = cents % 25

    dimes = cents // 10
    cents = cents % 10

    nickels = cents // 5
    cents = cents % 5

    pennies = cents

    return int(quarters + dimes + nickels + pennies)


cents = get_cents()
main(cents)
