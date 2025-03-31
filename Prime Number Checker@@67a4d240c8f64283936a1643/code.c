#include <stdio.h>
int isPrime(int num){
    int j=2,flag=1;
    if(num<=1){
        return 0;
    }
    else{
    while(j < num){
        if(num%j==0){
            return 0;
        } 
        else{
            return 1;
        }  
        j++; }}
}