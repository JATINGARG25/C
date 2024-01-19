#include<stdio.h>

int linearsearch(int arr[], int size,int element){
    for (int i=0; i<size;i++){
        if (arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main(){

    int a[100] = {5,7,9,10,15,16,23,43,56,76,87};
    
    int size = sizeof(a)/sizeof(int);
    int element = 43;
    int searchindex = linearsearch(a,size,element);
    printf("The element %d was found at %d index.\n",element,searchindex);
    return 0;
}