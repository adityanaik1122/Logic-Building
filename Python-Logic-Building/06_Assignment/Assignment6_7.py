#   Author : Aditya Naik
#  Program : write a program to accept 5 number from use and print largest number
#/////////////////////////////////////////////////////////////

def Max(numbers):
    iMax = numbers[0]
    for i in numbers:
       if i > iMax:
           iMax = i
    return iMax       
         

def main():
    print("Please enter the 5 number : ")
    numbers = []
    for i in range(5):
        no = int(input())
        numbers.append(no)
    
    iRet = Max(numbers)
    print("Maximum number is : ", iRet)    

if __name__ == "__main__":
    main()