#include <stdio.h>
int main() {
    int N,i,j=2,flag=1,a[100]={},count=0;
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++){
        j=2;
        flag=1;
        while(j<a[i]){
            if(a[i]%j==0){
                flag=0;
                break;
            }
            j++;
            if(flag==1 && a[i]>1){
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
    }