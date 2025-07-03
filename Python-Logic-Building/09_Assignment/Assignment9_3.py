from multiprocessing import Pool
import math

def factorial(n):
    return math.factorial(n)

def main():
    numbers = [5,6,7,10,12,15]
    with Pool() as pool:
        result = pool.map(factorial, numbers)
    print("input numbers : ", numbers)
    print("factorial : ", result)    

if __name__ == "__main__":
    main()

 