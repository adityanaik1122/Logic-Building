#   Author : Aditya Naik
#  Program : write a program which create two thread 
# named as evenfactor and oddfactor. 
# and thread will display addition of even factor and odd factor
#/////////////////////////////////////////////////////////////

import threading

def FactEven(n):
    even_sum = 0
    for i in range (1,n+1):
        if n % i == 0 and i % 2 == 0:
            even_sum = even_sum + i
    print(f"Sum of even factor : {even_sum}")

def FactOdd(n):
    odd_sum = 0
    for i in range (1,n+1):
        if n % i == 0 and i % 2 != 0:
            odd_sum = odd_sum + i
    print(f"Sum of odd factor : {odd_sum}")    

def main():
    number = int(input("Enter a number: "))
    # Create threads
    even_thread = threading.Thread(target=FactEven(number),args=(number,), name="even")
    odd_thread = threading.Thread(target=FactOdd(number),args=(number,), name="odd")

    # Start threads
    even_thread.start()
    odd_thread.start()

    # Wait for both threads to finish
    even_thread.join()
    odd_thread.join()

    print("Exit from main")

if __name__ == "__main__":
    main()