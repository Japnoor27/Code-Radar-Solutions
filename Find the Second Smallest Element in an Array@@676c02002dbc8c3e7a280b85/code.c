#include <stdio.h>

int main() {
    int N, a[100], i, j, flag = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Find the second smallest element
    int first = a[0];
    int second = -1;  // Default to -1 if no second smallest exists

    for (i = 1; i < N; i++) {
        if (a[i] > first) {
            second = a[i];
            break;
        }
    }

    printf("%d\n", second);

    return 0;
}