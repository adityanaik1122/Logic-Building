    #   Author : Aditya Naik
    #  Program : Accept the temperature in celsius and convert it fahrenheit 
    #     
#//////////////////////////////////////////////////////////

def Temp(num):
    iTemp = (num * 9/5) + 32
    return iTemp             

def main():
    print("Enter the temperature in celsius : ")
    no1 = int(input())

    iRet = Temp(no1)
    print("Temperature in fahrenheit is  : ",iRet)
    
if __name__ == "__main__":
    main()