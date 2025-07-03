from functools import reduce

def main():
    list1 = [4,34,36,76,68,24,89,23,86,90,45,70]

    listf = list(filter(lambda X: 70 <= X <=90, list1))
    print(listf)

    listm = list(map(lambda X : X + 10, listf))
    print(listm)

    listr = reduce(lambda X , Y: X * Y, listm)
    print(listr)
   
if __name__ == "__main__":
    main()