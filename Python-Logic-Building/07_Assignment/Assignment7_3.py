#   Author : Aditya Naik
#  Program : write lambda funtion
#            Accept list of integer from user and filter() to keep only even number.
#/////////////////////////////////////////////////////////////



def main():
    numbers = []
    print("enter the number to add in the list")

    while True:
        no = input()
        if no == '':
            break
        try:
            num = int(no)
            numbers.append(num)
        except ValueError:
             print("Please enter a valid number.")

    print("You entered:",numbers)

    data = list(filter(lambda X : X % 2 == 0 ,numbers))
    print("output of filter data",data)

if __name__ == "__main__":
    main()