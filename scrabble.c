#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
const int M = 25;

char a[M];
char b[M];

printf("Player 1: ");
scanf("%s", &a);

for (int i = 0, n = strlen(a); i < n; i++)
  {
  toupper(a[i]);
  }

printf("Player 2: ");
scanf("%s", &b);

for (int i = 0, n = strlen(b); i < n; i++)
  {
  toupper(b[i]);
  }

// printf("%s %s\n", a, b);
}
