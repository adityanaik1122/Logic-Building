    #   Author : Aditya Naik
    #  Program : write a program which accept two integer
    #           and display thier sum,difference,product,division
#//////////////////////////////////////////////////////////


def Sum(no1,no2):
    Add = (lambda x,y: x + y)
    return Add(no1,no2)  

def Sub(no1,no2):
    substract = (lambda x,y: x - y)
    return substract(no1,no2)  

def Mult(no1,no2):
    mult = (lambda x,y: x * y)
    return mult(no1, no2)  

def Div(no1,no2):
    div = (lambda x,y: x / y)
    return div(no1, no2)  


def main():
    print("Please enter the number of : ")
    number1 = int(input())

    print("Please enter the number of : ")
    number2 = int(input())

    ret1 = Sum(number1, number2)
    ret2 = Sub(number1, number2)
    ret3 = Mult(number1, number2)
    ret4 = Div(number1, number2)

    print("Sum of two number is  : ",ret1)
    print("Difference of two number is  : ",ret2)
    print("Product of two number is  : ",ret3)
    print("Division of two number is  : ",ret4)

if __name__ == "__main__":
    main()