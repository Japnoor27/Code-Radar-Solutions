#include <stdio.h>
int main(){
int a[100]={},i,j,count=0,n,flag=1;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    int j=2;
  if(a[i]>1){
    while(j<a[i]){
        flag=1;
        if(a[i]%j==0){
            flag=0;
            break;
        }
        j++;
    }}
    if(flag==1 && a[i]>1){
        count++;
    }
}
printf("%d",count);}