#include<stdio.h>
void  multiply(int x, int *mul);
int main()
{
    int a=3;
    int mul;
    printf("Value of a is %d\n",a);
    multiply( a, &mul);
printf("Value of a after function call is %d",mul);
    return 0;
}
void  multiply(int x ,int *mul){
    
    *mul=x*10;
}