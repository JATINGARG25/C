#include<stdio.h>
void printarray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("Value of element %d is %d\n",i+1,*(ptr+i));
    }
}
int main()
{
    int arr[]={23,32,23,546,67,78,78};
    printarray(arr,7);
    return 0;
}