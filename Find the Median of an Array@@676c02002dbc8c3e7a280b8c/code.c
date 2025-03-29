#include <stdio.h>
int main(){
    int i,a[100]={},med,n;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
if(n%2!=0){
    med=a[(n-1)/2];
    printf("%d",med);
}
else if(n%2==0){
    med=(a[(n/2)]+a[(n/2)-1])/2;
    printf("%d",med);
}
}