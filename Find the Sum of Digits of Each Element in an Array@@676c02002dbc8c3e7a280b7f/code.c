#include <stdio.h>
int main() {
    int N, i, n, sum, a[100] = {};
    
    // Input the size of the array
    scanf("%d", &N);
    
    // Input the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    
    
    for (i = 0; i < N; i++) {
        sum = 0; 
        while (a[i] != 0) {
            n = a[i] % 10;    
            a[i] =a[i]/ 10;      
        }
        printf("%d ", sum);  
    }
    return 0;
}