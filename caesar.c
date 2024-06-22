#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* if nothing is typed at stdin, print a help message and return an error
* if user types a positive int value, prompt them for plaintext
* use the key to encrypt it and output cyphertext */

#define M 512

char* tocypher(char x[M], int k);

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

  long key = strtol(argv[1], NULL, 10);

  char *plain = malloc(M);
  printf("plaintext: ");
  fgets(plain, M, stdin);

  char* cypher = tocypher(plain, key);
  printf("cyphertext: %s\n", cypher);
}

char* tocypher(char x[M], int k)
{
  for (int i = 0, n = strlen(x); i < n; i++)
    {
      x[i] += k;
    }
  return x;
}
