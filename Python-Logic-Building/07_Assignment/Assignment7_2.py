#   Author : Aditya Naik
#  Program : write lambda funtion
#            Accept list of integer from user and map() funtion to double eacg value.
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

    data = list(map(lambda X : X * 2,numbers))
    print("output of map data",data)

if __name__ == "__main__":
    main()