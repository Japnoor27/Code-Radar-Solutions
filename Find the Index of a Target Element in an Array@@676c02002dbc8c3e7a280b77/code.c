#include <stdio.h>
int main() {
    int N,t,i;
    scanf("%d",&N);
    int arr[N];
    for (i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",t);
    for(i=0;i<N;i++){
        if(arr[i]==t){
            printf("%d",i);
        }
        else{
            printf("-1");
        }
    }