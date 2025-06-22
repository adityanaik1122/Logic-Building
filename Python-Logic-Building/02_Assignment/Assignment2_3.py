    #   Author : Aditya Naik
    #  Program : accept one number from user and print factorial
    #     Date : 26/05/2025
#   ///////////////////////////////////

def Factorial():
    iNo = int(input("Enter the number you want to factorial :"))

    iMult = 1

    for i in range(1, iNo + 1):
        iMult = iMult * i
    print("Factorial is :", iMult)
           


def main():
    Factorial()


if __name__=="__main__":
    main()