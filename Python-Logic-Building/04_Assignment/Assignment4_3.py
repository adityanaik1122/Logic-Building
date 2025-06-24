    #   Author : Aditya Naik
    #  Program : FMR 
    #input list = [4, 34, 36, 76, 68, 24, 89, 23, 86, 90, 45, 70]
    #List after filter = [76, 89, 86, 70]
    #List after map = [86, 99, 96, 80]
    #Output of reduce = 6538752000
    #//////////////////////////////////////////////////////////

from functools import reduce

def main():
    inputList = [4, 34, 36, 76, 68, 24, 89, 23, 86, 90, 45, 70]
    print("list = ",inputList)
    
    filtered = list(filter(lambda x: x>=70 and x<90, inputList))
    print("list after filter = ",filtered)

    mapped = list(map(lambda x: x + 10, filtered))
    print("List after map = ", mapped)

    product = reduce(lambda x,y: x*y,mapped)
    print("List after reduce = ", product)

if __name__ == "__main__":
    main()