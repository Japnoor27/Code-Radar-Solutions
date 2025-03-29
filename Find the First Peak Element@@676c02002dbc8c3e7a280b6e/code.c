#include <stdio.h>
int main(){
    int N,a[100]={},max,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
   for(i=0;i<N;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        printf("%d",a[i]);
        return 0;
    }
   }
   if(a[N-1]>a[N-2]){
    printf("%d",a[N-1]);
    return 0;
   }
   if(a[0]>a[1]){
    printf("%d",a[0]);
   }
}