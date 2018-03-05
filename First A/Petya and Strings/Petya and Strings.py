
def pety():
    x = input()
    y = input()

    if len(x) < 1 or len(x) > 100 or len(y) < 1 or len(y) > 100:
        return -1

    x = x.capitalize()
    y = y.capitalize()

    if x > y:
        print("1")
    elif x < y:
        print("-1")
    else:
        print("0")

pety()
