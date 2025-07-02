#   Author : Aditya Naik
#  Program : write a program two lambda funtions
#            1) one to calculate square of a number
#            2) another to calculate cube of a number
#/////////////////////////////////////////////////////////////

def FindSquareCube(num):
    square = lambda X : X*X
    print("Square of %d is : %d"% (num,square(num)))

    cube = lambda X : X*X*X
    print("Cube of %d is : %d"% (num,cube(num)))

def main():
    print("Enter the number : ")
    no = int(input())
   
    FindSquareCube(no)

if __name__ == "__main__":
    main()