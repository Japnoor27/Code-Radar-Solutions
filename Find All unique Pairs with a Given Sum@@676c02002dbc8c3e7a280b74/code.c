#include <stdio.h>

int main() {
    int i, n, a[100] = {}, pair = 0, j, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &t);

    // Sort the array (simple bubble sort, replace with efficient sort if needed)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Find unique pairs
    for (i = 0; i < n; i++) {
        if (i > 0 && a[i] == a[i - 1]) continue; // Skip duplicates
        for (j = i + 1; j < n; j++) {
            if (j > i + 1 && a[j] == a[j - 1]) continue; // Skip duplicates
            if (a[i] + a[j] == t) {
                printf("%d %d\n", a[i], a[j]);
            }
        }
    }
}