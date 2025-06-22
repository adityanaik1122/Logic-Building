    #   Author : Aditya Naik
    #  Program : accept one number from user and check number is prime or not

    #     Date : 26/05/2025
#   ///////////////////////////////////

def Chk_Prime(iValue):
    if iValue <= 1:
        return False
    

    for iCnt in range(2,int(iValue ** 0.5) + 1):
        if iValue % iCnt == 0: 
            return False
    
    return True      


def main():
    iNo = int(input("Enter the number :")) 

    if (Chk_Prime(iNo)):
        print("Number is prime ")
    else:
        print("Number is not prime ") 

if __name__=="__main__":
    main()