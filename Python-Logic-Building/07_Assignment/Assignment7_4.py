#   Author : Aditya Naik
#  Program : write lambda funtion
#            Accept list of integer from user and reduce() to find product of all number
#/////////////////////////////////////////////////////////////

from functools import reduce
import operator

def main():
    numbers = []
    print("enter the number to add in the list")

    while True:
        no = input()
        if no == '':
            break
        try:
            num = int(no)
            numbers.append(num)
        except ValueError:
             print("Please enter a valid number.")

    print("You entered:",numbers)

    data = reduce(lambda X,Y : X * Y ,numbers)
    print("output of reduced multiplication data",data)

if __name__ == "__main__":
    main()