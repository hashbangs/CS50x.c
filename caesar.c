#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/* if nothing is typed at stdin, print a help message and return an error
* if user types a positive int value, prompt them for plaintext
* use the key to encrypt it and output cyphertext */

#define M 512

char* rotate(char x[M], int k);

int main(int argc, char* argv[])
{
  if (argv[1] == NULL)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }
  else if (argv[2] != NULL)
  {
    printf("too many arguments provided\n");
    return 2;
  }
  else
  {
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
      if (!isdigit(argv[1][i]))
      {
        printf("key entered is non-numerical\n");
        return 3;
      }
    }
  }

  long key = strtol(argv[1], NULL, 10);

  char *plain = malloc(M);
  printf("plaintext: ");
  fgets(plain, M, stdin);

  char* cypher = rotate(plain, key);
  printf("cyphertext: %s\n", cypher);
}

char* rotate(char x[M], int k)
{
  for (int i = 0, n = strlen(x); i < n; i++)
  {
    if (isalpha(x[i]))
    {
      if (isupper(x[i]))
      {
        x[i] = ((x[i] - 65 + k) % 26) + 65;
      }
      else
      {
        x[i] = ((x[i] - 97 + k) % 26) + 97;
      }
    }
  }
  return x;
}
