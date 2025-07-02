#   Author : Aditya Naik
#  Program : write lambda funtion
#            Accept list of integer from user and return the list of prime numbers using filter
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

    prime = lambda X:X > 1 and all(X % i != 0 for i in range(2, int(X**0.5) + 1 ))

    prime_number = list(filter(prime, numbers))
    print("prime numbers are : ",prime_number)

if __name__ == "__main__":
    main()