#   Author : Aditya Naik
#   Program : accept number from use and check wether its positive r negative
#   Date : 10/05/2025

def ChkNum(no):
    if no > 0:
        print("Positive Number")
    elif no < 0:
        print("Negative Number") 
    else:
        print("Zero")     

def main():
    num = int(input("Input is :"))
    ChkNum(num)

if __name__ == "__main__":
    main()
