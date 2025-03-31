#include <stdio.h>
int binarySearch(int arr[], int n, int target){
    int found=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
        if(arr[i]==target){
           return i;}
           if(arr[i]==arr[i+1]){
            return n%2;
           }

        }
    
    }return -1;
   
}