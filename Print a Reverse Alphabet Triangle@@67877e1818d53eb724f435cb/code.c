#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=65+(n-1);i>=n+64;i--){
        for(j=65;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}