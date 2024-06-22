#include <stdio.h>

// C strings always end with a nul character, written as \0 

int string_len(char s[20]);
int main(void)
{
  char name[20];

  printf("Name: ");
  scanf("%s", &name);
  int length = string_len(name);
  printf("%i\n", length);
}

int string_len(char s[20])
{
  int n = 0;
  while (s[n] != '\0')
  {
    n++;
  }
  return n;
}
