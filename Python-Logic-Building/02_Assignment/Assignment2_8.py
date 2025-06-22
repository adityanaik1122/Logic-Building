    #   Author : Aditya Naik
    #  Program : accept one number from user and print pattern
    #           1 
    #           1 2 
    #           1 2 3 
    #           1 2 3 4 
    #           1 2 3 4 5
    #     Date : 26/05/2025
#   ///////////////////////////////////

def pattern():
    iNo = int(input("Enter the number you want to print :"))

    for i in range(1,iNo +1):
        for j in range(1,i + 1):
            print(j,end=" ")
        print()    

def main():
    pattern()


if __name__=="__main__":
    main()