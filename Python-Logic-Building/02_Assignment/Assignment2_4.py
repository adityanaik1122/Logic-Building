    #   Author : Aditya Naik
    #  Program : accept one number from user and print addition of factors
    #     Date : 26/05/2025
#   ///////////////////////////////////

def Factors(iValue):
    if iValue <= 0:
        return
    
    iSum = 0

    for i in range(1,iValue + 1):
        if iValue % i == 0: 
            iSum = iSum + i
    
    return iSum      


def main():
    iNo = int(input("Enter the number :"))

    ret = Factors(iNo)

    print("Sum of the factors is :", ret)

if __name__=="__main__":
    main()