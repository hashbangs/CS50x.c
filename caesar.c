#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* if nothing is typed at stdin, print a help message and return an error
* if user types a positive int value, prompt them for plaintext
* use the key to encrypt it and output cyphertext */

#define M 512

char* tocypher(char x[M]);

int main(int argc, char* argv[])
{
  if (argv[1] == NULL)
  {
    printf("Usage: ./caesar key\n");
    return 1;
  }
  char *plain = malloc(M);
  printf("plaintext: ");
  fgets(plain, M, stdin);

  char* cypher = tocypher(plain);
  printf("%s\n", cypher);
}

char* tocypher(char x[M])
{
  for (int i = 0, n = strlen(x); i < n; i++)
    {
      x[i] += 1;
    }
  return x;
}
