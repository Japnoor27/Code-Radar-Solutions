#include <stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(l=1;l<i;l++){
            printf("%d",i);
        }
        printf("\n");
    }
    }