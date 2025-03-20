#include <stdio.h>
int main() {
    int N, i, j, space;
    
    scanf("%d", &N); // Take user input for the top half rows

    // Top half of the diamond
    for (i = 1; i <= N; i++) {
        for (space = 1; space <= N - i; space++) { // Print spaces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for (i = N - 1; i >= 1; i--) {
        for (space = 1; space <= N - i; space++) { // Print spaces
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) { // Print stars
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
