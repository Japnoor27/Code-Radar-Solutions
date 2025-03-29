#include <stdio.h>
int main() {
    int N, i, n, sum, a[100] = {};
    
    // Input the size of the array
    scanf("%d", &N);
    
    // Input the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    
    // Process each number in the array
    for (i = 0; i < N; i++) {
        sum = 0; // Reset sum for each number
        while (a[i] != 0) {
            n = a[i] % 10;    // Extract the last digit
            sum += n;         // Add the digit to the sum
            a[i] /= 10;       // Remove the last digit
        }
        printf("%d ", sum);  // Print the sum of digits for the current number
    }
    return 0;
}