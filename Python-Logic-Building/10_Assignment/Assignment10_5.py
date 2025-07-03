from functools import reduce

def main():
    list1 = [2,70,11,10,17,23,31,77]

    listf = list(filter(lambda X: X > 1 and all(X % i != 0 for i in range(2, int(X ** 0.5) +1)), list1))
    print(listf)

    listm = list(map(lambda X : X * 2, listf))
    print(listm)

    listr = reduce(lambda X ,Y: X if X > Y else Y, listm)
    print(listr)
   
if __name__ == "__main__":
    main()