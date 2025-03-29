#include <stdio.h>
int main(){
    int N,i,a[100]={},j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
       for(j=i+1;j<N;j++){
        if(a[j]=a[j+!]){
            printf("%d",a[i]);
        }
       }
    }
}