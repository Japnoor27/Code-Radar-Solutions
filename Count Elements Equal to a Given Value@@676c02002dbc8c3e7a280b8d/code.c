#include <stdio.h>
int main(){
    int N,i,k,count=0,a[100]={};
    scanf("%d%d",&N,&k);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    
    }
    for(i=0;i<N;i++){
        if(a[i]==k){
            count++;
        }
    }
    printf("%d",count);
}