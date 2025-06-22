#   /////////////////////////////////////////////////////////
    #   Author : Aditya Naik
    #  Program : python program which accepts n number 
    #            from user. Acceput one number from use and 
    #            return frequency of that number from list. 
#   /////////////////////////////////////////////////////////


def NumFind():

    print("Please enter the number of elements ")
    number = int(input())

    numbers = []
    for i in range(number):
        no = float(input(f"enter number : "))
        numbers.append(no)

    print("Please enter the number you want to count ")
    no1 = float(input())

    icount = 0
    for num in numbers:
        if num == no1:
            icount += 1
    
       
    return icount  
def main():

   ret = NumFind()
   print("Frequency of numbers is  : ",ret)

if __name__ == "__main__":
    main()