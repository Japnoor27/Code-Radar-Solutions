#include <stdio.h>
int main() {
    int N, a[100], freq[100], i, j, count;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Calculate frequencies
    for (i = 0; i < N; i++) {
        count = 1; // Initialize count for the current element
        for (j = i + 1; j < N; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency of the current element
        }
    }

    // Display frequencies of unique elements
    printf("Element Frequencies:\n");
    for (i = 0; i < N; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", a[i], freq[i]);
        }
    }

    return 0;
}