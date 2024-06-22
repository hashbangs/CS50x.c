#include <stdio.h>

// global variable 
const int N = 3; // when declaring a constant it's common to use uppercase letters

// function prototype
float average(int length, int array[]);

int main(void)
{
  int scores[N];
  for (int i = 0; i < N; i++) // iterating from i to N
  {
    printf("Score: ");
    scanf("%i", &scores[i]); // assigning each score to a return value
  }

  printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float) length;
}
