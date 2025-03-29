#include <stdio.h>
int main() {
    int N,t,i,arr[100]={};
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<N;i++){
        if(arr[i]==t){
            printf("%d",i);
        }
      
    }}