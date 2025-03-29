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
            if(count!=0){
                max=b[0];
                for(i=0;i<count;i++){
                    if(b[i]>=max){
                        max=a[i];
                    }

                }
                printf("%d",max);
            }
            else{
                printf("-1");
            }
              
          

        
    }
