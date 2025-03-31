#include <stdio.h>
int isPrime(int num){
    int j=2,flag=1;
    while(j<num){
        if(num%j==0){
            return 0;
        } 
        else{
            return 1;
        }  
        j++; }
}