#include <stdio.h>

int main() {
    int a, i, t;

    scanf("%d", &a);

    for (i = 1; i <= 10; i++) {
        t = a * i;
        printf("%d x %d = %d\n", a, i, t);
    }

    return 0;
}
