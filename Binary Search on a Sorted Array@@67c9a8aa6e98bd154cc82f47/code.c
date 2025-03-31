#include <stdio.h>
int found=0;
int binarySearch(int arr[],int n; int target){
    for(int i=0;i<n;i++){
        found=0;
        if(arr[i]==target){
            found=1;
        }
        else{
            found=0;
        }
    }
    if(found==1){
        printf("%d",arr[i]);
    }
}