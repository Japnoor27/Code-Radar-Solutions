#include <stdio.h>
int binarySearch(int arr[], int n, int target){
    int found=-1;
    for(int i=0;i<n;i++){
        
        if(arr[i]==target){
           return i;
            found=1;
            break;

        }
    }return -1;
   
}