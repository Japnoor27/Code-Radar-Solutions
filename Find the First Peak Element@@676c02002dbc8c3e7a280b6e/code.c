#include <stdio.h>
int main(){
    int N,a[100]={},max,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[j]>max){
                max=a[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}