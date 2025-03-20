#include <stdio.h>
int main(){
    int N,i,j;
    scanf("%d",&N);
    for(i=2;i>=0;i--){
        for(j=0;j<=i;j++){
printf("*");
        }
        printf("\n");
    }
}