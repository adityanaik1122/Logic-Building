    #   Author : Aditya Naik
    #  Program : python program which accepts n number 
    #            from user and return minimum number 
#   ///////////////////////////////////


def Minimum():
    print("Please enter the number of elements ")
    number = int(input())

    iMin = float(input("Enter number 1 :"))

    for i in range(1,number):

        no = float(input(f"enter number {i+1}: "))
        if( no < iMin):
            iMin = no
            
    return iMin  
def main():

   ret = Minimum()
   print("Minimum numbers is  : ",ret)

if __name__ == "__main__":
    main()