#include <stdio.h>

/* prompt the user for 3 int values
  check if the values are positive
  check if the sum of two of them is greater than the third
*/

int main(void)
{

int a, b, c;

printf("Input: ");
scanf("%i %i %i", &a, &b, &c);

int valid_triangle()
  {
    if (a < 1 || b < 1 || c < 1)
    {
      printf("false\n");
    }
    else if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
    {
      printf("false\n");
    }
    else
    {
      printf("true\n");
    }
  }
valid_triangle(a, b, c);
}
