#include <stdio.h>

// Return 1 if n is prime, and return 0 otherwise
int
is_prime (int n)
{
  int d;
  int prime = 1;
  if (n < 2) {
    return 0;
  }
  for (d=2;d<n;d++) {
    if (n%d == 0) {
      prime = 0;
      break;
    }
  }
  return prime;
}

// Find the first 1000 primes.
int
main (void)
{
  int n_primes = 0;
  int i = 0;
  while (n_primes < 10000) {
    i++;
    if (is_prime(i)){
      printf("%d\n", i);
      n_primes++;
    } 
  }
}
