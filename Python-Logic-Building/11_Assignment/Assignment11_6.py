
def Sum_n(no):
    if no == 1:
        return 1
    else:
        return no + Sum_n(no-1)

             

def main():
    num = int(input("Enter the number : "))
    iRet = Sum_n(num)
        
    print("Sum of natural number is : ", iRet)

if __name__ == "__main__":

    main()