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

      if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'L' || x[i] == 'N' || x[i] == 'O' || x[i] == 'R' || x[i] == 'S' || x[i] == 'T' || x[i] == 'U')
      {
        score += 1;
      }
      else if (x[i] == 'D' || x[i] == 'G')
      {
        score += 2;
      }
      else if (x[i] == 'B' || x[i] == 'C' || x[i] == 'M' || x[i] == 'P')
      {
        score += 3;
      }
      else if (x[i] == 'F' || x[i] == 'H' || x[i] == 'V' || x[i] == 'W' || x[i] == 'Y')
      {
        score += 4;     
      }
      else if (x[i] == 'K')
      {
        score += 5;
      }
      else if (x[i] == 'J' || x[i] == 'X')
      {
        score += 8;
      }
      else if (x[i] == 'Q' || x[i] == 'Z')
      {
        score += 10;
      }
    } 
    return score;
  }
