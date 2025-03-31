#include <stdio.h>
int isPrime(int p){
    if(p<=1){
        return 0;
    }
    for(int i=2;i<p;p++){
        if(p%i==0){
            return 0;
        }
    }return 1;
}
int printPrimesInRange(int a,int b){
    int flag=0;
    for(int i=a;i<b;i++){
        if(isPrime(i)){
            printf("%d",i);
            flag=1;
        }
    }
    if(!flag){
        printf("No prime numbers");
    }
    printf("\n");
}