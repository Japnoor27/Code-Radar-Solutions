#include <stdio.h>
int main(){
int a[100]={},i,j,count=0,n,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    int j=2;
    count=0;
    while(j<a[i]){
        flag=0;
        if(a[i]%j==0){
            flag=1;
            break;
        }
        j++;
    }
    if(flag==0 && a[i]>1){
        count++;
    }
}
printf("%d",count);}