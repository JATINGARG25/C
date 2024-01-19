#include<stdio.h>
int main()
{
    int arr[100];
    arr[1] = 23;
    arr[2] = 45;
    arr[3] = 96;
    arr[4] = 56;


    for(int i = 0; i<100 ; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}