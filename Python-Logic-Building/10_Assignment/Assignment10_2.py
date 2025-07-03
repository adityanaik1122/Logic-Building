
def Mult(N1, N2):
    mult = lambda X, Y : X * Y 
    return mult(N1, N2)

def main():
    num1 = int(input("plese enter the number : "))
    num2 = int(input("plese enter the number : "))
    iRet = Mult(num1, num2)
    print("Multiplication of %d and %d is : %d" % (num1, num2, iRet))

if __name__ == "__main__":
    main()