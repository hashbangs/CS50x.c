#include <stdio.h>

int main() {

// prompt for the user's input of how much change is owed in cents 

    int n;
    printf("Change owed: ");
    scanf("%d", &n);

    int i = 0; // Number of coins to be stored in the variable

// While that number > 25 substract a value of 25¢ = a quarter until the remainder < 25
// Repeat with dimes (10¢), nickels (5¢), and pennies (1¢) and add the count to the same variable ( i )

    if (n >= 0 && n != 42) {     
    while (n > 0) {

        if (n >= 25) {
            n -= 25;
            i++;
        }
        else if (n >= 10) {
            n -= 10;
            i++;
        }
        else if (n >= 5) {
            n -= 5;
            i++;
        }
        else {
            n -=1;
            i++;
        }
    }
    printf("%d", i); // Output the total of unit of coins used 
  }   
  else {
    printf("%d is not a correct value\n", n);
  }
}

