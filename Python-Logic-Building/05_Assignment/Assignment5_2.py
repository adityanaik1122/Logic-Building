    #   Author : Aditya Naik
    #  Program : write a program which accept character from user
    #            and check if it is a vovel(a,e,i,o,u)    
#//////////////////////////////////////////////////////////

def CheckChar(ch):
    if ch.lower() in ('a','e','i','o','u'):
        print(f"'{ch}' is a vowel.")
    else:
        print(f"'{ch}] is a consonant")    



def main():
    print("Please enter the character : ")
    Letter = (input())

    CheckChar(Letter)

if __name__ == "__main__":
    main()