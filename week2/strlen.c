#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20];
  
  printf("Name: ");
  scanf("%s", &name);
  int length = strlen(name);
  printf("%i\n", length);
}
