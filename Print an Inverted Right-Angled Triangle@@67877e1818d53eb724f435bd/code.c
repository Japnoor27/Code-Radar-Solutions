#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i>=0;i--){
        for(j=5;j>=i;j--){
printf("*");
        }
        printf("/n");
    }
}