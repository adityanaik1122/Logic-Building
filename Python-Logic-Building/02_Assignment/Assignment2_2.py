    #   Author : Aditya Naik
    #  Program : accept one number from user and print pattern
    #     Date : 26/05/2025
#   ///////////////////////////////////

def pattern():
    iNo = int(input("Enter the number you want to print :"))

    for i in range(iNo):
        for j in range(iNo):
            print("*\t",end="")
        print()    

def main():
    pattern()


if __name__=="__main__":
    main()