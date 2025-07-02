#   Author : Aditya Naik
#  Program : write a program to check weather number is prime
#/////////////////////////////////////////////////////////////

def Prime(num):
    if num <=1:
        return False
    for i in range(2,int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True     
         
         

def main():
    print("enter the number : ")
    no = int(input())
    
    iRet = Prime(no)
    if (iRet == True):
        print("%d is prime"% no)
    else:
        print("%d is not prime"% no)


if __name__ == "__main__":
    main()