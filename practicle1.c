#include<stdio.h>
int main(){
    int arr[100];
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Max number is %d\n",max);

    





    return 0;
}