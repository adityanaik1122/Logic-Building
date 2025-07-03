from functools import reduce

def main():
    list1 = [5,2,3,4,3,4,1,2,8,10]

    listf = list(filter(lambda X: X % 2 ==0 , list1))
    print(listf)

    listm = list(map(lambda X : X * X, listf))
    print(listm)

    listr = reduce(lambda X , Y: X + Y, listm)
    print(listr)
   
if __name__ == "__main__":
    main()