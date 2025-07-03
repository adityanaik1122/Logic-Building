from multiprocessing import Process, current_process, Manager

def square_numbers(numbers, result, index):
    proc = current_process()
    print(f"Process {proc.name} (ID: {proc.pid}) is squaring: {numbers}")
    squared = [x**2 for x in numbers]
    result[index] = squared

def main():
    numbers = [1, 2, 3, 4, 5, 6, 7, 8]
    num_processes = 4  # Number of processes to use
    chunk_size = len(numbers) // num_processes

    # Use a Manager list to share results between processes
    with Manager() as manager:
        result = manager.list([[] for _ in range(num_processes)])
        processes = []

        # Split the list into chunks and create a process for each chunk
        for i in range(num_processes):
            start = i * chunk_size
            # Make sure the last chunk includes any leftover elements
            end = (i + 1) * chunk_size if i != num_processes - 1 else len(numbers)
            p = Process(target=square_numbers, args=(numbers[start:end], result, i), name=f"Process-{i+1}")
            processes.append(p)
            p.start()

        # Wait for all processes to finish
        for p in processes:
            p.join()

        # Flatten the result list
        squared_numbers = [num for sublist in result for num in sublist]
        print("Original numbers:", numbers)
        print("Squared numbers :", squared_numbers)

if __name__ == "__main__":
    main()
