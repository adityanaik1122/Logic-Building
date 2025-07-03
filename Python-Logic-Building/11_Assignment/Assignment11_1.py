
def Printn(n):
    if n== 0:
        return
    Printn(n-1)
    print(n)

def main():
    num = int(input("Enter number : "))
    Printn(num)

if __name__ == "__main__":
    main()