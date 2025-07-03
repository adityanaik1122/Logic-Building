from multiprocessing import Process,Value
import time
import threading

N = 10_000_000

def normal_sum():
    return sum(range(1, N+1))

def threaded_sum(result):
    result[0] = sum(range(1, N + 1))

def multiprocess_sum(shared_result):
    shared_result.value = sum(range(1, N+1))    

def main():
    #normal funtion
    start = time.time()
    result_normal= normal_sum()
    print("normal sum result:", result_normal)
    print("Normal funtion time :",time.time() - start,"seconds\n")

    #Threading
    start = time.time()
    result = [0]
    t = threading.Thread(target = threaded_sum, args=(result,))
    t.start()
    t.join()
    print("threaded sum result:", result[0])
    print("threaded funtion time :",time.time() - start,"seconds\n")

    #Multiprocessing

    from multiprocessing import Value
    start = time.time()
    shared_result = Value('i', 0)
    p = Process(target = multiprocess_sum, args =(shared_result,))
    p.start()
    p.join
    print("Multiprocessing sum result:", shared_result.value)
    print("Multiprocessing time:", time.time() - start, "seconds")

if __name__ == "__main__":
    main()
