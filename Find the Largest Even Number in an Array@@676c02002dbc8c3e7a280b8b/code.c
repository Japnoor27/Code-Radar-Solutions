#include <stdio.h>
int main(){
    int N,i,a[100]={},j,b[100]={},max,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
      if(a[i]%2==0){
     b[i]=a[i];
     count++;
            }}
            max=b[0];
            for(j=0;j<count;j++){
                
if(b[j]>max){
    max=b[j];
      printf("%d",max);
}
               else {
                printf("-1");
               }
            }
          

        
    }
