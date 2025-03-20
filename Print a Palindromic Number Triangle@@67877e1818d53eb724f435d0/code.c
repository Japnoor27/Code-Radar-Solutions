#include <stdio.h>
int main() {
    int n, i, j,k,l;
 
    scanf("%d", &n); // Input the number of rows

    for (i = 1; i <= n; i++) { // Outer loop for rows
        // Print spaces for alignment
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);

        }
        // Print decreasing numbers
        for (l = i - 1; l>= 1; l--) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}

