
import threading

def display_t1():
    print("threat 1 - 50 : ")
    for i in range(1,51):
        print(i, end=' ')
    print("\n Thread t1 finished")

def display_t2():
    print("thread 50 - 1 : ")
    for i in range(50, 0, -1):
        print(i, end=' ')   
    print("\n Thread t2 finished")         

def main():
    
    # Create threads
    t1 = threading.Thread(target= display_t1, name="t1")
    t2 = threading.Thread(target= display_t2, name="t2")
   
    t1.start()
    t1.join()
    
    t2.start() 
    t2.join()

    print("Exit from main")

if __name__ == "__main__":
    main()