    #   Author : Aditya Naik
    #  Program : write a program which contains one lambda funtion which accepts
    #            one parameter an return multiplication of two.
    #//////////////////////////////////////////////////////////


def Mult(no1,no2):
    multiplication = (lambda X,Y: X * Y)
    return multiplication(no1,no2)  

def main():
    print("Please enter the first number : ")
    number1 = int(input())

    print("Please enter the second number : ")
    number2 = int(input())

    ret = Mult(number1,number2)
    print("multiplication of number is  : ",ret)

if __name__ == "__main__":
    main()