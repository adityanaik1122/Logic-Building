    #   Author : Aditya Naik
    #  Program : accept one number from user and print how many digits are there in that number
    #    input : 4234243
    #   output : 7
    #     Date : 26/05/2025
#   ///////////////////////////////////

def Count():
    iNo = int(input("Enter the number you want to count :"))

    iCount = 0
    while(iNo > 0):
        iNo = iNo // 10
        iCount = iCount + 1
    
    print("Number of digits are :",iCount)    

def main():
    Count()


if __name__=="__main__":
    main()