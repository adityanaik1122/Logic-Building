#   Author : Aditya Naik
#   Program : accept one number from user and return true if number is divisible by 5
#   Date : 10/05/2025

def Divisible(no):
    return no % 5 == 0
   

def main():
    num = int(input("Input is :"))
    result = Divisible(num)
    print(result)

if __name__ == "__main__":
    main()
