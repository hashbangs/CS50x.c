#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* prompt the user for a string input
* count the number of letters, words and sentences and store those values
* compute them using the index 
* output the grade level as an int value */

#define M 512

int lc(char x[M]);
int wc(char x[M]);
int sc(char x[M]);

int main(int argc, char* argv[])
{
  char *text = malloc(M);
  if (text == NULL)
  {
    printf("no memory\n");
    return 1;
  }
  printf("Text: ");
  fgets(text, M, stdin);

  int letters = lc(text);
  int words = wc(text);
  int sentences = sc(text);

  // output the count
  printf("\t%i\t%i\t%i\n", letters, words, sentences);

  // calculating the index
  float L = ((float)letters / (float)words) * 100;
  float S = ((float)sentences / (float)words) * 100;

  float index = 0.0588 * L - 0.296 * S - 15.8;

  index = roundf(index);

  // output the index
  if (index <= 0)
  {
    printf("grade level: before grade 1\n");
  }
  else if (index > 16)
  {
    printf("grade level: 16+\n");
  }
  else
  {
    printf("grade level: %i\n",(int)index);
  }
}

// letter count
int lc(char x[M])
{
  int l = 0;

  for (int i = 0, n = strlen(x); i < n; i++)
  {
    if (x[i] >= 'a' && x[i] <= 'z' || x[i] >= 'A' && x[i] <= 'Z')
    {
      l += 1;
    }
  }
  return l;
}

// word count
int wc(char x[M])
{
  int w = 0;
  
  for (int i = 0, n = strlen(x); i < n; i++)
  {
    if (x[i] == ' ')
    {
      w += 1;
    }
  }
  // n° of words = n° of whitespaces + 1
  w += 1;
  return w;
}

// sentence count
int sc(char x[M])
{
  int s = 0;

  for (int i = 0, n = strlen(x); i < n; i++)
  {
    if (x[i] == '.' || x[i] == '?' || x[i] == '!')
    {
    s += 1;
    }
  }
  return s;
}
