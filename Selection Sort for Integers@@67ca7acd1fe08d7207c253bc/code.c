#include <stdio.h>

// Selection Sort Function
void selectionSort(int arr[], int n) {
    int i, j, minidx;
    for (i = 0; i < n - 1; i++) {
        minidx = i; // Assume the current element is the smallest
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j; // Update index of the smallest element
            }
        }
        // Swap the found smallest element with the first element
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

