#   Author : Aditya Naik
#  Program : write a program to find Sum of even numbers between 1 to 100
#/////////////////////////////////////////////////////////////

def SumEven():

    i = 1
    sum = 0
    while i <= 100:
        if(i % 2 == 0):
            sum = i + sum
        i = i + 1    

    return sum        

def main():
    iRet = SumEven()
    print("Sum of even numbers between 1 to 100 is : ",iRet)

if __name__ == "__main__":
    main()