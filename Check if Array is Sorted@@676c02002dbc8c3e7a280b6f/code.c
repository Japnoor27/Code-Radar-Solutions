#include <stdio.h>
int main(){
    int N,a[100]={},i,j,flag=0;
scanf("%d",&N);
for(i=0;i<N;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
        flag=0;
        if(a[i]<a[j] || a[i]==a[j]){
           flag=1;
        }
        else{
            flag=0;
            }
    }
}
if(flag==1){
    printf("Sorted");

}
else{
    printf("Not Sorted");
}

}