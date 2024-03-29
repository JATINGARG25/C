#include<stdio.h>

void display(int arr[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int indinsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }

    for (int i = size-1 ; i >= index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5 , capacity = 100 , element = 23 , index = 5;
    display(arr,size);
    indinsertion(arr,size,element,capacity,index);
    size += 1;
    display(arr,size);
    if (size+=1) {
        printf("Insertion Successful");
    }
    else{
        printf("Insertion Unsuccessful");
    }



    return 0;

}