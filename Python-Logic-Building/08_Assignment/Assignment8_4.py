
import threading

def Small(value):
    thread = threading.current_thread()
    smallcase = [ch for ch in value if ch.islower()]
    print(f"[{thread.name} | ID : {thread.ident}] smallcase letters: {''.join(smallcase)}")


def Capital(value):
    thread = threading.current_thread()
    capital = [ch for ch in value if ch.isupper()]
    print(f"[{thread.name} | ID : {thread.ident}] uppercase letters: {''.join(capital)}")


def Digit(value):
    thread = threading.current_thread()
    digit = [ch for ch in value if ch.isdigit()]
    print(f"[{thread.name} | ID : {thread.ident}] smallcase letters: {''.join(digit)}")
  

def main():
    Str = input("Enter the string : ") 

    # Create threads
    small_thread = threading.Thread(target= Small,args=(Str,), name="small")
    capital_thread = threading.Thread(target= Capital,args=(Str,), name="capital")
    digit_thread = threading.Thread(target= Digit,args=(Str,), name="digit")


    # Start threads
    small_thread.start()
    capital_thread.start()
    digit_thread.start()

    # Wait for both threads to finish
    small_thread.join()
    capital_thread.join()
    digit_thread.join()

    print("Exit from main")

if __name__ == "__main__":
    main()