#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 256

int main(void)
{
  const char *strings[M];

  strings[0] = "battleship";
  strings[1] = "boot";
  strings[2] = "cannon";
  strings[3] = "iron";
  strings[4] = "thimble";
  strings[5] = "top hat";

  char *s = malloc(M);
  if (s == NULL)
  {
    printf("no memory\n");
    return 1;
  }
  printf("String: ");
  fgets(s, M, stdin);

  // remove trailing newlines from fgets() input (ASCII value 10)
  s [strcspn(s, "\n")] = 0;

  for (int i = 0; i < 6; i++)
  {
    // strcmp returns 0 if all characters have a matching ASCII value
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  } 
  // substitute [1] to check for the return value of a comparison with another entry in strings[]
  printf("Not found ; return value of strcmp(): %d\n", strcmp(strings[1], s));
  return 1;
}
