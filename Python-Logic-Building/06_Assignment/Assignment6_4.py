#   Author : Aditya Naik
#  Program : write a program to display table of number up to 10
#/////////////////////////////////////////////////////////////

def Fact(num):
    fact = 1
    for i in range(num):
        fact = fact * num
        if num != 0:
            num = num - 1
    return fact        
         

def main():
    print("enter the number : ")
    no = int(input())
    
    iRet = Fact(no)
    print("Factorial of %d is : %d "% (no,iRet))

if __name__ == "__main__":
    main()