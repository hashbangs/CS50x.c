#include <stdio.h>

int main() {

    int n;

    printf("Give a number: ");
    scanf("%d", &n);
    printf("Here's a pyramid with a height of %d\n", n);
        while (n < 1 || n > 25);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j < n - 1)
                    printf(" ");
                else
                    printf("#");
            }
        printf("  ");
        for (int j = 0; j < n; j++) {
            if (n - i < j + 2)
                printf("#");
        }
        printf("\n");
    }
}