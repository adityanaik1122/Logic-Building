    #   Author : Aditya Naik
    #  Program : accept one number from user and print addition of all the digits in that number
    #    input : 4234243
    #   output : 22
    #     Date : 26/05/2025
#   ///////////////////////////////////

def Count():
    iNo = int(input("Enter the number you want to count :"))

    iSum = 0
    iDigit = 0
    while(iNo > 0):
        iDigit = iNo % 10
        iSum = iSum + iDigit
        iNo = iNo // 10
        
    print("Sum of the digits are :",iSum)    

def main():
    Count()


if __name__=="__main__":
    main()