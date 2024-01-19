#include<stdio.h>
 
int binarysearch(int arr[],int size,int element){
    int low,high,mid;
    low = 0;
    high = size-1;

    while(low<=high){

        mid = (low+high)/2;
        if (arr[mid] == element){
            return mid;
        }
        if (arr[mid] < element){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int a[] = {5,7,9,10,15,16,23,43,56,76,87};
    
    int size = sizeof(a)/sizeof(int);
    int element = 76;
    int searchindex = binarysearch(a,size,element);
    printf("%d\n",size);
    printf("The element %d was found at %d index.\n",element,searchindex);
    return 0;
}