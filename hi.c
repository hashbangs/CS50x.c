#include <stdio.h>

int main(void)
{
  // an array of two char arrays (multidimensionnal array) 
  char array[3][4] = {"HI!", "BYE!"};

  printf("%s\n", array[0]);
  printf("%c\t%c\t%c\n", array[0][0], array[0][1], array[0][2]);
  printf("%i %i %i %i %i\n", array[0][0], array[0][1], array[0][2], array[0][3], array[0][4]);
  printf("%s\n", array[1]);
}
