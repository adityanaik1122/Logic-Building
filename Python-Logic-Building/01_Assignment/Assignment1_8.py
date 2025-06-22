#   Author : Aditya Naik
#   Program : accept one number from user and print that number of "*" on screen
#   Date : 10/05/2025

def Print_starts(count):
    for i in range(count):
        print("*", end = '')
   

def main():
    num = int(input("Input is :"))
    Print_starts(num)
    print()

if __name__ == "__main__":
    main()
