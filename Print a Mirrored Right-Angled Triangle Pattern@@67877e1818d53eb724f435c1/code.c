#include <stdio.h>
int main(){
    int N,i,j,k;
    for(i=1;i<=N;i++){
        for(k=N;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
    }
}