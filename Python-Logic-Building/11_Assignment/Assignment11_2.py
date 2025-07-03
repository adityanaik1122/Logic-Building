fact = 1

def Fact(no):
    global fact
    if(no >= 1):
        fact = fact * no
        no = no - 1
        Fact(no)
    return fact

def main():
    num = int(input("Enter number : "))
    iRet = Fact(num)
    print("Factorial of %d is :%d "% (num,iRet))

if __name__ == "__main__":
    main()