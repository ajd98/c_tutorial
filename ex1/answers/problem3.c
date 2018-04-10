#include <stdio.h>

// Return the length of the Collatz sequence starting from n, up to the first
// `1` in the sequence.
long int
collatz_stopping_time(long int n)
{
  long int a = n;
  long int time = 0;
  while (a != 1) {
    if (a % 2 == 0) {
      a /= 2;
    } else {
      a = 3*a+1;
    }
    time++;
  }
  return time;
}

// Test the n for 0 < n < 1000000; if this function ever completes, the
// conjecture is true.
int
main (void)
{
  long int n_with_greatest_time = 1; 
  long int greatest_time = 0; 
  long int n;
  long int time;
  for (n=1;n<1000000;n++) {
    time =  collatz_stopping_time(n);
    if (time > greatest_time){
      greatest_time = time;
      n_with_greatest_time = n;
    }
  }
  printf("%ld (stopping time of %ld)\n", n_with_greatest_time, greatest_time);
}
