/* 1! = 1
 * 2! = 2 * 1!
 * 3! = 3 * 2!
 * 4! = 4 * 3! */

#include <stdio.h>

int factorial(int n);

int main(void)
{
  int n;

  do
  {
    printf("n: ");
    scanf("%i", &n);
  }
  while (n < 0);

  printf("%i\n", factorial(n));
}

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }

  return n * factorial(n - 1);
}
