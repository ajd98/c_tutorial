#!/usr/bin/env python

def is_prime(n):
    if n < 2:
        return False
    prime = True
    for i in range(2,n):
        if n % i == 0:
            prime = False
            break
    return prime

def main():
    n_primes = 0
    i = 0
    while n_primes < 10000:
        i += 1
        if is_prime(i):
            print(i)
            n_primes += 1

if __name__ == "__main__":
    main()
