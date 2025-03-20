#include <stdio.h>
int main() {
    int N, i, j, space;
   
    scanf("%d", &N); // Take user input for the number of rows

    for (i = 1; i <= N; i++) { // Loop for rows
        for (space = 1; space <= N - i; space++) { // Print spaces for alignment
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // Print numbers
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}
