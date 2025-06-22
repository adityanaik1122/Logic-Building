    #   Author : Aditya Naik
    #  Program : accept one number from user and print pattern
    #           1 2 3 4 5
    #           1 2 3 4 5
    #           1 2 3 4 5
    #           1 2 3 4 5
    #           1 2 3 4 5
    #     Date : 26/05/2025
#   ///////////////////////////////////

def pattern():
    iNo = int(input("Enter the number you want to print :"))

    for i in range(iNo):
        for j in range(1,iNo +1):
            print(j,end=" ")
        print()    

def main():
    pattern()


if __name__=="__main__":
    main()