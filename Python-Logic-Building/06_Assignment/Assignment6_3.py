#   Author : Aditya Naik
#  Program : write a program to display table of number up to 10
#/////////////////////////////////////////////////////////////

def Table(num):
    i = 1
    while i <= 10:
        tab = num * i
        print("%d x %d = %d" % (num,i,tab))
        i = i + 1    
         

def main():
    print("enter the number you want to wite a table of")
    no = int(input())
    Table(no)
    

if __name__ == "__main__":
    main()