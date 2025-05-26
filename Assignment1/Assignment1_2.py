    #   Author : Aditya Naik
    #  Program : Accept input and addition of two numbers
    #     Date : 10/05/2025
#   ///////////////////////////////////

def Add(iNo1,iNo2):
    Ans = iNo1 + iNo2
    return Ans
       
    

def main():
    print("Enter two the number")
    Value1 = int(input())
    Value2 = int(input())
    
    Ret = Add(Value1,Value2)

    print("Addition is",Ret)


if __name__ == "__main__":
    main()