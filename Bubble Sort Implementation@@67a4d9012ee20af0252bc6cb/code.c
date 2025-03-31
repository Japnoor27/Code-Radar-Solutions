#include <stdio.h>
int i,j;
int bubbleSort(arr,n){
    for( i=0;i<n-1;i++){
        for( j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
int printArray(arr,n){
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}