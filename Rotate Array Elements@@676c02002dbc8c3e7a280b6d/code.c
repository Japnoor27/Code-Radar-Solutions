#include <stdio.h>
void reverse(int a[],int si,int ei){
    int i,j;
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    return;
}
int main(){
    int n,a[i],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
}