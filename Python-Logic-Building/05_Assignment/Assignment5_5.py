    #   Author : Aditya Naik
    #  Program : Check if entered number is even or odd
    #     
#//////////////////////////////////////////////////////////

def CheckMax(num):
    if  (num % 2) == 0:
        return True
    else:
        return False               

def main():
    print("Enter the number : ")
    no = int(input())

    iRet = CheckMax(no)
    if(iRet == True):
        print("Number is even.")
    else:
        print("Number is Odd.")
    
if __name__ == "__main__":
    main()