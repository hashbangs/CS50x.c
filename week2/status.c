#include <stdio.h>

/* argc (ARGument Count) is an integer variable that stores the number of command-line
arguments passed by the user including the name of the program */
// argv (ARGument Vector) is an array of character pointers listing all the arguments

// "echo $status" will display the exit status of the last command in fish

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("missing command-line argument\n");
    return 1;
  }
  printf("hello, %s\n", argv[1]);
  return 0;
}
