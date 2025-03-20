#include <stdio.h>
int main() {
    int n, i, j, start;

    scanf("%d", &n); // Take user input for the number of rows

    for (i = 1; i <= n; i++) { // Outer loop for rows
        start = i % 2; // Determine the starting number (1 for odd rows, 0 for even rows)
        for (j = 1; j <= i; j++) { // Inner loop for numbers in each row
            printf("%d ", start); // Print the current number
            start = 1 - start; // Alternate between 1 and 0
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
