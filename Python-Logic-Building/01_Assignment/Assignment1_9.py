#   Author : Aditya Naik
#   Program : program to display first 10 even number on screen
#   Date : 10/05/2025

def display_even_numbers():
    for i in range(1, 11):        
        print(i * 2, end=' ')     

def main():
    display_even_numbers()
    print() 

if __name__ == "__main__":
    main()
