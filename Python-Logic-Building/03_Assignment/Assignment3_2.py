    #   Author : Aditya Naik
    #  Program : python program which accepts n number 
    #            from user and return maximum number 
#   ///////////////////////////////////


def Maximum():
    print("Please enter the number of elements ")
    number = int(input())

    iMax = 0
    for i in range(number):
        no = float(input(f"enter number : "))
        if(no > iMax):
            iMax = no
    return iMax   
def main():

   ret = Maximum()
   print("Maximum numbers is  : ",ret)

if __name__ == "__main__":
    main()