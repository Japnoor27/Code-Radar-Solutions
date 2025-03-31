#include <stdio.h>
int binarySearch(int arr[];int n; int target){
    int found=-1;
    for(int i=0;i<n;i++){
        found=-1;
        if(arr[i]==target){
            found=1;
        }
        else{
            found=-1;
        }
    }
    if(found==1){
        printf("%d",arr[i]);
    }
}