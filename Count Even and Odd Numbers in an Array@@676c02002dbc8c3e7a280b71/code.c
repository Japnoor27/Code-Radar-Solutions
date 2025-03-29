#include <stdio.h>
int main(){
    int N,a[100]={},counteven=0,countodd=0, i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        if(a[i]%2==0){
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("%d %d",counteven,countodd);
}