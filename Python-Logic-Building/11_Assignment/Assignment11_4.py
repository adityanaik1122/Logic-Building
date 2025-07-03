
def power(base,exponent):
    
    if base <= 0 and exponent <= 0:
        return 1
    
    result = 1
    for i in range(exponent):
        result = result * base
    return result    

def main():
    num1 = int(input("Enter base number : "))
    num2 = int(input("Enter exponent number : "))
    iRet = power(num1,num2)
    print("power of %d is :%d "% (num1,iRet))

if __name__ == "__main__":
    main()