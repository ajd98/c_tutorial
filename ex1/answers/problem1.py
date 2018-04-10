#!/usr/bin/env python

def basel_sum(n):
    result = 0
    for i in range(1,n+1):
        result += 1/float(i*i)
    return result

def main():
    print("{:f}".format((6*basel_sum(10000))**(0.5)))

if __name__ == "__main__":
    main()
