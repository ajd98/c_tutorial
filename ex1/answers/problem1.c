#include <math.h>
#include <stdio.h>

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


int
main (void)
{
  printf("%f\n", sqrt(6*basel_sum(10000)));
}
