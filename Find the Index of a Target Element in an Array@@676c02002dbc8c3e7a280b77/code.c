#include <stdio.h>
int main() {
    int N,t;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
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