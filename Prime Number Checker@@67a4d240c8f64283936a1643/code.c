#include <stdio.h>
int isPrime(int num){

    if(num<=1){
        return 0;
    }
    else{
    for(int j=2;j<num;j++){
        if(num%j==0){
            return 0;
        } 
      
     }}
     return 1;
      
}