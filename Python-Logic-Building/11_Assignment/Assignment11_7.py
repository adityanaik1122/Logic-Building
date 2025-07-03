
def Pattern(no):
    if no == 0:
        return
    Pattern(no - 1)
    print('*' * no)
    
def main():
   num =4
   Pattern(num)

if __name__ == "__main__":

    main()