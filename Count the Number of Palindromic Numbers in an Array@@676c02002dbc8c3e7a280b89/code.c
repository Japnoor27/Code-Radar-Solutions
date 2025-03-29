#include <stdio.h>
int main(){
    int i,N,a[100]={},rem,rev=0,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<N;i++){
       while(a[i]>0){
            rem=a[i]%10;
            rev=rev*10+rem;
            a[i]=a[i]/10;}
    if(a[i]==rev){
        count++;
    }
    }
    printf("%d",count);
}