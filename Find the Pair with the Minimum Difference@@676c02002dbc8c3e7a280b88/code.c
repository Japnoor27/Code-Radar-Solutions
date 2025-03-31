#include <stdio.h>
#include <limits.h>
int main(){
    int n,a[100]={},i,num1,num2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int diff=INT_MAX;
   for(i=0;i<n-1;i++){
    int min=a[i+1]-a[i];
   if(min<diff){
   diff=min;
    num1=a[i];
    num2=a[i+1];

   }
   }
   printf("%d %d",num1,num2);
   if(n==1){
    printf("-1");
   }
}