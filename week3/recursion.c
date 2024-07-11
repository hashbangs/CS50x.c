#include <stdio.h>

void draw(int n);

int main(void)
{
  int height;

  printf("Height: ");
  scanf("%i", &height);

  draw(height);
}

void draw(int n)
{
  // if nothing to draw
  if (n <= 0)
  {
    return;
  }
  // print pyramid of height n - 1
  draw(n - 1);

  // print one more row
  for (int i = 0; i < n; i++)
  {
    printf("#");
  }
  printf("\n");
}
