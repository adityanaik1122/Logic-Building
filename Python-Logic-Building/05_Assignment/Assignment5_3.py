    #   Author : Aditya Naik
    #  Program : write a program for voting eligibilty checker
    #     
#//////////////////////////////////////////////////////////

def CheckAge(no):
    if  no >= 18:
        print("Eligible to vote.")
    else:
        print("Not eligible to vote.") 



def main():
    print("Please enter the Age : ")
    Age = int(input())

    CheckAge(Age)
    
if __name__ == "__main__":
    main()