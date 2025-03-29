#include <stdio.h>
int main() {
    int N,t,i,arr[100]={},flag=0;
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<N;i++){
        int flag=0;
        if(arr[i]==t){
            printf("%d",i);
            flag=1;
            break;
        }
      
    }
   if(flag==0){
    printf("-1");
   }
   return 0;
    }