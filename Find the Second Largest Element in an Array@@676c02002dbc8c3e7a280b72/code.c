#include <stdio.h>
int main(){
    int N,a[100]={},i,j,freq[100]={},count=1,flag=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
      }
      for(i=0;i<N-1;i++){
         flag=1;
        for(j=0;j<N-1-i;j++){
           
            if(a[j]>a[j+1]){
                flag=1;
               int temp =a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
            else if(a[j]==a[j+1]){
                flag=0;
            }
        }
      }
    
    
       if(flag==1){
        printf("%d",a[N-2]);
      }
      else{
        printf("-1");
      }
     return 0;
      
      }