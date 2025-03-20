#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=2;i>=0;i++){
        for(j=0;j<=N;j++){
printf("*");
        }
        printf("/n");
    }
}