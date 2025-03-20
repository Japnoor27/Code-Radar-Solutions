#include <stdio.h>
int main() {
    int n, i, j, num = 1;
 
    scanf("%d", &n); // Take user input for the number of rows

    for (i = 1; i <= n; i++) { // Loop for rows
        for (j = 1; j <= i; j++) { // Loop for columns in each row
            printf("%d ", num); // Print the current number
            num++; // Increment the number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
