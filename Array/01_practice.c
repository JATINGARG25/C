#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr=&arr[0];
    ptr+=2;

if(ptr==&arr[2]){
    printf("Point to the same location\n");
}
else{
    printf("Not point to the same location ");
}
    return 0;
}