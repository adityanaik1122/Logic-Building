    #   Author : Aditya Naik
    #  Program : accept one number from user and print pattern
    #            * * * * * * 
    #            * * * * *   
    #            * * * *
    #            * * *   
    #            * *
    #            *   
    #     Date : 26/05/2025
#   ///////////////////////////////////

def pattern():
    iNo = int(input("Enter the number you want to print :"))

    for iCnt in range(iNo, 0 , -1):
        for jCnt in range(iCnt):
            print("*\t",end="")
        print()    

def main():
    pattern()


if __name__=="__main__":
    main()