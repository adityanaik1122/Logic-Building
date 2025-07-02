#   Author : Aditya Naik
#  Program : write a program which create two thread 
# named as evenlist and oddlist. 
# and thread will display addition of even list and odd list
#/////////////////////////////////////////////////////////////

import threading

def EvenList(num):
    even_sum = 0
    for i in num:
        if i % 2 == 0:
            even_sum = even_sum + i
    print(f"Sum of even list : {even_sum}")

def OddList(num):
    odd_sum = 0
    for i in num:
        if i % 2 != 0:
            odd_sum = odd_sum + i
    print(f"Sum of odd list : {odd_sum}")    

def main():
    numbers = []
    print("Enter numbers to add to the list")

    while True:
        no = input()

        if no == '':
            break
        try:
            num = int(no)
            numbers.append(num)
        except ValueError:
            print("Please enter a valid integer.")

    print("Entered list is ",numbers)    

    # Create threads
    even_thread = threading.Thread(target= EvenList,args=(numbers,), name="even")
    odd_thread = threading.Thread(target= OddList,args=(numbers,), name="odd")

    # Start threads
    even_thread.start()
    odd_thread.start()

    # Wait for both threads to finish
    even_thread.join()
    odd_thread.join()

    print("Exit from main")

if __name__ == "__main__":
    main()