    #   Author : Aditya Naik
    #  Program : Write a program which contains one fuuntion name as ChkNum() which accept one parameter
    #           as number. if number is even then it should display "even" or odd.
    #     Date : 10/05/2025
#   ///////////////////////////////////

def ChkNum(iNo):
    if (iNo % 2 == 0):
        print("number is even")
    else:
        print("number is odd")    
    

def main():
    print("Enter the number")
    Value = int(input())
    ChkNum(Value)


if __name__ == "__main__":
    main()