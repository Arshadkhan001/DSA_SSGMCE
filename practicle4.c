#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[] = {4,2,8,5,3,8};
    for(int i=0;i<6;i++){
        printf("Orignal array is %d\n",arr[i]);
    }
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int k=0;k<6;k++){
        printf("Sorted array is: %d\n" , arr[k], "  ");
    }
    return 0;
}