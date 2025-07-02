#   Author : Aditya Naik
#  Program : write a program which create two thread 
# named as even and odd. 
# and thread will display first 10 even and odd numbers
#/////////////////////////////////////////////////////////////

import threading

def PrintEven():
    for i in range (2,21,2):
        print(f"Even number : {i}")

def PrintOdd():    
    for i in range(1,20,2):
        print(f"odd number : {i}")

def main():
    # Create threads
    even_thread = threading.Thread(target=PrintEven(), name="even")
    odd_thread = threading.Thread(target=PrintOdd(), name="odd")

    # Start threads
    even_thread.start()
    odd_thread.start()

    # Wait for both threads to finish
    even_thread.join()
    odd_thread.join()
if __name__ == "__main__":
    main()