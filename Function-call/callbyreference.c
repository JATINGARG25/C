#include <stdio.h>
int swap(int *a, int *b);
                                                  // int wrongswap(int a , int b);
int main()                                       // not work because of call by value
{
    int x, y;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of y\n");
    scanf("%d", &y);
    printf("The value of x and y before swap is %d and %d.\n", x, y);
    swap(&x, &y);                                                           // wrongswap(x,y);
    printf("The value of x and y after swap is %d and %d.\n", x, y);
    return 0;
}
int swap(int *a, int *b)
{                               // work because of call by reference ***
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}                                              // int wrongswap(int a , int b){
                                               //     int temp;
                                               //     temp=a;
                                               //     a=b;
                                               //     b=temp;
                                               // }                
