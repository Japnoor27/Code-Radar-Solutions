#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    int N, i, j, flag, a[100], count = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < N; i++) {
        if (a[i] > 1) { // Only numbers > 1 can be prime
            flag = 1; // Assume the number is prime
            for (j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    flag = 0; // Not a prime number
                    break;
                }
            }
            if (flag == 1) {
                count++; // Increment count if the number is prime
            }
        }
    }
    
    printf("%d\n", count); // Print the total count of prime numbers
    return 0;
}