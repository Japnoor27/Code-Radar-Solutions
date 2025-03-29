#include <stdio.h>
int main() {
    int N, i, j,n,sum=0,a[100]={};
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        while(a[i]!=0){
            n=a[i]%10;
            sum=sum+n;
            a[i]=a[i]/10;
        }
        printf("%d",sum);
    }
    }