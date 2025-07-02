    #   Author : Aditya Naik
    #  Program : Accept the length and width of the rect
    #           calculate area and parameter. 
    #     
#//////////////////////////////////////////////////////////

def Area(num1,num2):
    ans = num1 * num2
    return ans 

def Perimeter(num1,num2):  
    ans = 2*(num1 + num2) 
    return ans           

def main():
    print("Enter the length : ")
    no1 = int(input())

    print("Enter the Width : ")
    no2 = int(input())

    iRet1 = Area(no1,no2)
    print("Area is : ",iRet1)

    iRet2 = Perimeter(no1,no2)
    print("Perimeter is : ",iRet2)
    
if __name__ == "__main__":
    main()