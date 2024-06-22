#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  const int M = 50;
  char s[M];
  printf("Before: ");
  scanf("%s", &s);
  printf("After: ");
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z') // when using toupper() the if/else conditionnal is redundant
    {
      // printf("%c", s[i] - 32); this version uses the the int value of letters from the ASCI chart
      printf("%c", toupper(s[i])); // this version uses a function from the ctype header
    }
    else
    {
      printf("%c", s[i]);
    }
  }
  printf("\n");
}
