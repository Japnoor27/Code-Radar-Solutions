#include <stdio.h>
int main(){
    int n,i,j,start=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",start);
        start=start-1;
        }
        printf("\n");
    }
}

