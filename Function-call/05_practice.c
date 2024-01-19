#include<stdio.h>
int main()
{
    int a=3;
    int *b=&a;
    int **c=&b;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",**c);
    return 0;
}