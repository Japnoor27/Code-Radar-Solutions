#include <stdio.h>
int main() {
    int n, i, j;
 
    scanf("%d", &n); // Input the number of rows

    for (i = 1; i <= n; i++) { // Outer loop for rows
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}

