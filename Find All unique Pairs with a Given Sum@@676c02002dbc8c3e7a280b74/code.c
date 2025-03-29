#include <stdio.h>
int main(){
    int i,n,a[100]={},pair=0,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                pair++;
            }
        }
    }
    printf("%d",pair);
}