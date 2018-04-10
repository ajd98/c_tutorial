#include <math.h>
#include <stdio.h>

// Find the sum of 1/1 + 1/4 + 1/9 + 1/16 + ... + 1/n^2
double
basel_sum (int n)
{
  double result = 0;
  int i;
  for (i=1;i<=n;i++) {
    result += 1/((double)(i*i));
  }
  return result;
}

// Calculate a rough estimate of pi
int
main (void)
{
  printf("%f\n", sqrt(6*basel_sum(10000)));
}
