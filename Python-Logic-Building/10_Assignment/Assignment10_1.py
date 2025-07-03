
def Power(n):
    pow = lambda X : X * X 
    return pow(n)

def main():
    num = int(input("plese enter the number : "))
    iRet = Power(num)
    print("power of %d is : %d" % (num, iRet))

if __name__ == "__main__":
    main()