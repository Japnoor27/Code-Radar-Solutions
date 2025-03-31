#include <stdio.h>
int selectionSort(char arr[],int n){
    for( char i=0;i<n-1;i++){
        for( char j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
int printArray( char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}