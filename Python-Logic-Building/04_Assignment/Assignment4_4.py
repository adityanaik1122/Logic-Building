    #   Author : Aditya Naik
    #  Program : Filter even number, map square, reduce(sum) 
    #input list = [4, 3, 2, 6, 7, 8, 9, 12]
    #List after filter = [4, 2, 6, 8, 12]
    #List after map = [16, 4, 36, 64, 144]
    #Output of reduce = 264
    #//////////////////////////////////////////////////////////

from functools import reduce

def main():
    inputList = [5, 2,3,4,3,4,1,2,8,10]
    print("list = ",inputList)
    
    filtered = list(filter(lambda x: x % 2 == 0, inputList))
    print("list after filter = ",filtered)

    mapped = list(map(lambda x: x ** 2, filtered))
    print("List after map = ", mapped)

    product = reduce(lambda x,y: x + y,mapped)
    print("List after reduce = ", product)

if __name__ == "__main__":
    main()