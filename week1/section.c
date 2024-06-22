#include <stdio.h>

void print_row(int length); // function prototype

int main() {

  int height;
  scanf("%d", &height);
  for (int i = 0; i < height; i++) {
    print_row(i + 1);  
  }
}

void print_row(int length) {  // define a function to print rows
  for (int i = 0; i < length; i++) {
    printf("# ");
  }
  printf("\n");
}

