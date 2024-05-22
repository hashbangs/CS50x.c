#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* prompt the user for a string input
* count the number of letters, words and sentences and store those values
* compute them using the index 
* output the grade level as an int value */

#define M 256

int main(int argc, char* argv[])
{
  char *text = malloc(M);
  if (text == "NULL")
  {
    printf("no memory\n");
    return 1;
  }
  printf("Text: ");
  fgets(text, M, stdin);
  printf("%s", text);

  int letters, words, sentences = 0;

  for (int i = 0, n = strlen(text); i < n; i++)
  {
    if (text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z')
    {
      letters += 1;
    }
    else if (text[i] == ' ')
    {
      words += 1;
    }
    else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
    {
      sentences += 1;
    }
  }
  // n° of words = n° of whitespaces + 1
  words += 1;

  printf("%i %i %i\n", letters, words, sentences);
}

