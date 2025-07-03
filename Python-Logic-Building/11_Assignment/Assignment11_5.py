
def CountZero(no):
    count = 0
    if no == 0:
        return 0

    
    last_digit = no % 10 
    if last_digit == 0:
        count = 1 if last_digit == 0 else 0

    return count + CountZero(no // 10)            

def main():
    num = int(input("Enter the number : "))
    if num == 0:
        iRet = 1
    else:
        iRet = CountZero(num)
        
    print("There are %d zeros in %d "% (iRet, num))

if __name__ == "__main__":

    main()