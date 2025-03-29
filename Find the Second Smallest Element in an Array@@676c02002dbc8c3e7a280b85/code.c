#include <stdio.h>
#include <limits.h>
int main(){
    int i,n,a[100]={};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int smallest= INT_MAX, ssmallest= INT_MAX;
    for(i=0;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]<smallest &&a[i]!=smallest){
            ssmallest=a[i];
        }
        if(ssmallest==INT_MAX){
            printf("-1");
        }
        else{
            printf("%d",smallest);
        }
    }
}