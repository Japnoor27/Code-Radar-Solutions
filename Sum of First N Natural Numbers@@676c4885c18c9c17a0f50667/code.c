#include <stdio.h>
int main(){
    int n,s=0,i=0;
    scanf("%d ",&n);
    while(i<=n){
        s=s+i;
        i++;
    }
    printf("%d",s);
    return 0;
}