
def Sum_of_digits(no):
    if no == 0:
        return 0
    else:
        return (no % 10) + Sum_of_digits(no // 10)

def main():
    num = int(input("Enter number : "))
    iRet = Sum_of_digits(num)
    print("sum of %d is :%d "% (num,iRet))

if __name__ == "__main__":
    main()