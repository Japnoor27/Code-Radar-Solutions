#include <stdio.h>
int main(){
    int N,i,a[100]={},flag=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        flag=0;
        if(a[i]==a[i+1]){
           flag=1;
           break;
        }
    }
    if(flag==1){
        printf("%d",a[i]);
    }
}