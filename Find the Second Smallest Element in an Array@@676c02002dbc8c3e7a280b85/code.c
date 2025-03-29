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
for(i=0;i<N;i++){
    if(a[i]<=small){
        small=a[i];
    }
}
printf("%d",small);

    return 0;
}