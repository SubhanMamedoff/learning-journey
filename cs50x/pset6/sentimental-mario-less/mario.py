def get_height():
    while True:
        try:
            h = int(input("Height: "))
            if 1 <=h <=8:
                return h
            else:
                continue
        except ValueError:
            continue

def main(height):
    hash = "#"
    tmp = height
    for i in range(height):
        space = " " * (tmp - 1)
        print(space, end="")
        tmp -= 1
        print(hash)
        hash += "#"
        i += 1

h = get_height()
main(h)
