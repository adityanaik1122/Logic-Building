#   Author : Aditya Naik
#  Program : write funtion Accept a string and checks wheather it is a palindrome
#/////////////////////////////////////////////////////////////



def main():
    print("enter the dstring to check : ")
    str = input()

    print("You entered:",str)

    reverse = str[::-1]

    if (str == reverse):
        print("String is palindrome")
    else:
        print("String is not palindrome")            

if __name__ == "__main__":
    main()