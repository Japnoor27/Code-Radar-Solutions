#include <stdio.h>
#include <limits.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    int largest = INT_MAX, slargest = INT_MAX;

    for (int i = 0; i < N; i++) {
        if (arr[i]<largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] < slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }
    if(slargest == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", slargest);
    }
   return 0;
}