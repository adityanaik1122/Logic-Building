    #   Author : Aditya Naik
    #  Program : write a program which contains one lambda funtion which accepts
    #            one parameter an return power of two.
    #//////////////////////////////////////////////////////////


def PowerOfTwo(no):
    power = (lambda X: 2 ** X)
    return power(no)  

def main():
   print("Please enter the number of : ")
   number = int(input())

   ret = PowerOfTwo(number)
   print("power of two is  : ",ret)

if __name__ == "__main__":
    main()