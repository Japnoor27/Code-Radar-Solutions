#include <stdio.h>

int main() {
    int i, N, a[100], rem, rev, count = 0;


    scanf("%d", &N);

   
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

   
    for (i = 0; i < N; i++) {
        int temp = a[i];  
        rev = 0;         

     
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

       
        if (a[i] == rev) {
            count++;
        }
    }

  
    printf("%d\n", count);

    return 0;
}