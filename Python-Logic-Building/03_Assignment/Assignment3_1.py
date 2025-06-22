    #   Author : Aditya Naik
    #  Program : python program which accepts n number 
    #            from user and return addition
#   ///////////////////////////////////


def Addition():
    print("Please enter the number of elements ")
    number = int(input())

    Sum = 0
    for i in range(number):
        no = float(input(f"enter number : "))
        Sum = Sum + no
    return Sum    

def main():

   ret = Addition()
   print("Sum of numbers is  : ",ret)

if __name__ == "__main__":
    main()