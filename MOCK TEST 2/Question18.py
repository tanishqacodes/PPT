#  Implement a decorator function called ‘timer’ that measures the execution time of a function. The ‘timer’ decorator should print the time taken by the decorated function to execute. Use the ‘time’ module in Python to calculate the execution time.

# Example:

# import time

# @timer
# def my_function():
#     # Function code goes here
#     time.sleep(2)

# my_function()

# Output:
# "Execution time: 2.00123 seconds"

from time import time
def timer(f):
    def warpp(*args,**kwargs):
        time1=time()
        res=f(*args,**kwargs)
        time2=time()
        print(time2-time1)
        return res
    return warpp

@timer
def function(n):
    for i in range(n):
        for j in range(10000):
            i*j

function(2)