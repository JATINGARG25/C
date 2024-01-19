#include<stdio.h>
int main()
{
    int i=34;
    int *r=&i;
    printf("The value of r is  %u\n",r);
    r++;                                           // size of integer and float is 4 byte**   // size of character is 1 byte**
    printf("the value of r is %u\n",r);
    return 0;
}