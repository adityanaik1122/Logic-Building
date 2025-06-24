    #   Author : Aditya Naik
    #  Program : Filter prime number, map will multiply each number by 2
    #  reduce will return maximum number. 
    #input list = [2, 70, 11, 10, 17, 23, 31, 77]
    #List after filter = [4, 2, 6, 8, 12]
    #List after map = [16, 4, 36, 64, 144]
    #Output of reduce = 264
    #//////////////////////////////////////////////////////////

from functools import reduce

def Prime(no):
    if no <=1:
        return False
    if no == 2:
        return True
    if no % 2 == 0:
        return False
    for i in range(3, int(no ** 0.5) +1, 2 ):
        if no % i == 0:
            return False
    return True    

def main():
    inputList = [2, 70, 11, 10, 17, 23, 31, 77]
    print("list = ",inputList)
    
    filtered = list(filter(Prime, inputList))
    print("list after filter = ",filtered)

    mapped = list(map(lambda x: x * 2, filtered))
    print("List after map = ", mapped)

    max = reduce(lambda x,y: x if x > y else y,mapped)
    print("List after reduce = ", max)

if __name__ == "__main__":
    main()