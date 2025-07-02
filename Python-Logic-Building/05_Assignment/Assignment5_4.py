    #   Author : Aditya Naik
    #  Program : find largest among three numbers
    #     
#//////////////////////////////////////////////////////////

def CheckMax(num1,num2,num3):
    if  num1 > num2:
        if num1 > num3:    
            iMax = num1
        else:
            iMax = num3
    else:
        if num2 > num3:
           iMax = num2   
        else:
            iMax = num3 

    return iMax                

def main():
    print("Enter three number : ")
    no1 = int(input())
    no2 = int(input())
    no3 = int(input())

    iRet = CheckMax(no1,no2,no3)
    print("Maximum value is : ",iRet)
    
if __name__ == "__main__":
    main()