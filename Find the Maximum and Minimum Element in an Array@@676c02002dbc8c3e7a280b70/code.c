#include <stdio.h>
int main(){
    int N,a[100]={},max,min,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[j]>max){
                max=a[j];
            }
             else if(a[j]<min){
                min=a[j];
            }
           
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}