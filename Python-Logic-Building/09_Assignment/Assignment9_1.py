
import threading
from threading import Timer

def display_t1():
    print("threat 1 - 5 : ")
    for i in range(1,6):
        print(i, end=' ')
    print("\nThread t1 finished")

def display_t2():
    print("threat 1 - 5 : ")
    for i in range(1,6):
        print(i, end=' ')
    print("\nThread t2 finished")
    
def display_t3():
    print("threat 1 - 5 : ")
    for i in range(1,6):
        print(i, end=' ')
    print("\nThread t3 finished")

def main():
    
    # Create threads
    t1 = threading.Thread(target= display_t1, name="t1")
    t2 = threading.Thread(target= display_t2, name="t2")
    t3 = threading.Thread(target= display_t3, name="t3")
   
    t1 = Timer(1,display_t1)
    t2 = Timer(1,display_t2)
    t3 = Timer(1,display_t3)

    t1.start()
    t1.join()
    
    t2.start() 
    t2.join()

    t3.start() 
    t3.join()


    print("Exit from main")

if __name__ == "__main__":
    main()