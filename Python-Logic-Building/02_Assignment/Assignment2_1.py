    #   Author : Aditya Naik
    #  Program : module which contains 4 funtions as Add(),Sub(),Mult(),Div().
    #     Date : 26/05/2025
#   ///////////////////////////////////

import Arithmetic_module

def Calculator():

    No1 = float(input("Enter the first number: "))

    No2 = float(input("Enter the second number: "))

    calc = input("Enter the funtion you want to perform\n 1)Addition\n 2)Substraction\n 3)multiplication\n 4)Division\n")

    if calc == '1':
        
        ans = Arithmetic_module.Add(No1,No2)
        print("Addition of two number is : ",ans)

    if calc == '2':
        
        ans = Arithmetic_module.Sub(No1,No2)
        print("Substractiion of two number is : ",ans)

    if calc == '3':
        
        ans = Arithmetic_module.Mult(No1,No2)
        print("Multiplication of two number is : ",ans)

    if calc == '4':
        
        ans = Arithmetic_module.Div(No1,No2)
        print("Division of two number is : ",ans)    

def main():

    Calculator()

if __name__ == "__main__":
    main()