#include <stdio.h>
int selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
     int min=arr[i];
     int minidx=i;
    }
    for(int j= int i;j<n;j++){
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
