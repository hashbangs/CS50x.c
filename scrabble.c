#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int M = 25;
int scoreup(char x[M]);

int main(void)
{
  char a[M];
  char b[M];
 
  printf("Player 1: ");
  scanf("%s", &a);

  printf("Player 2: ");
  scanf("%s", &b);
  
  int scorea = scoreup(a);
  int scoreb = scoreup(b);

  printf("%i %i\n", scorea, scoreb);

  if (scorea > scoreb)
  {
    printf("Player 1 wins\n");
  }
  else if (scorea < scoreb)
  {
    printf("Player 2 wins\n");
  }
  else
  {
    printf("Looks like a tie my man\n");
  }
}

  int scoreup(char x[M])
  {
    int score = 0;

    for (int i = 0, n = strlen(x); i < n; i++)
    {
      x[i] = toupper(x[i]);

      if (x[i] == 'A')
      {
        score += 1;
      }
      else if (x[i] == 'B')
      {
        score += 3;
      }
    }
    return score;
  }
