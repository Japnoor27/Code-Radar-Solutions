#include <stdio.h>
int main(){
    int N,i,a[100]={},j,b[100]={},max;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
      if(a[i]%2==0){
     b[i]=a[i];
            }}
            max=b[0];
            for(i=0;i<N;i++){
                for(j=i+1;j<N;j++){
if(a[j]>max){
    max=a[j];
}
                }
            }
            printf("%d",b[j]);

        
    }
