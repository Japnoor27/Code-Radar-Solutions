#include <stdio.h>
int selectionSort(int arr[],int n){
    int i,j,min,minidx;
    for(int i=0;i<n;i++){
     min=arr[i];
     minidx=i;
    }
    for(int j=i;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
            minidx=j;
        }
    }
    int temp=arr[minidx];
    arr[minidx]=arr[i];
    arr[i]=temp;
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
