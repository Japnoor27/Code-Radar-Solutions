#include <stdio.h>
int main() {
    int N, i, flag = 1;
    int a[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N ; i++) {
        if (a[i] != a[N - 1 - i]) {
            flag = 0; 
            break;
        }
    }

    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}