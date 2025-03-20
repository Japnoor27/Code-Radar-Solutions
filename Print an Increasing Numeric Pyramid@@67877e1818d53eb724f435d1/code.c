#include <stdio.h>
int main() {
    int n, i, j, space;

    scanf("%d", &n); // Input the number of rows

    for (i = 1; i <= n; i++) { // Loop for rows
        for (space = 1; space <= n - i; space++) { // Loop for spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) { // Loop for numbers
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}
