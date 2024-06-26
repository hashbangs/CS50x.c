#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 256

int main(void)
{
  char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  char *s = malloc(M);
  if (s == NULL)
  {
    printf("no memory\n");
    return 1;
  }
  printf("String: ");
  fgets(s, M, stdin);

  for (int i = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  printf("%i\n", strings [2][6]);
  printf("%i\n", s[6]);
  printf("Return value of strcmp(): %d\n", strcmp(strings[2], s));
  return 1;
}
