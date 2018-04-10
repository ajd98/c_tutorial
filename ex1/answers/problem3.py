#!/usr/bin/env python

def collatz_stopping_time(n):
    a = n
    time = 0
    while a != 1:
        if a % 2 == 0:
            a /= 2
        else:
            a = 3*a+1
        time += 1
    return time

def main():
    n_with_greatest_time = 1
    greatest_time = 0
    for n in range(1,1000000):
        time = collatz_stopping_time(n)
        if time > greatest_time:
            n_with_greatest_time = n
            greatest_time = time
    print("{:d} (stopping time of {:d}".format(n_with_greatest_time, 
                                               greatest_time))



if __name__ == "__main__":
    main()

