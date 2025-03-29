#include <stdio.h>
int main(){
    int N,a[100]={},i,j;
scanf("%d",&N);
for(i=0;i<N;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<N;i++){
   if(a[i]<a[i+1]){
    printf("Sorted");
   }
   else{
    printf("Not Sorted");
   }
    }
}
}