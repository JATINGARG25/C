#include<stdio.h>
int main()
{
    // pointer is a variable which store the address of another variable ..
    int a=5;
    int *b= &a;                         // j will store the address of a
printf("The value of a is %d\n",a);
printf("The value of b is %d\n",*b);
printf("The address of b is %u\n",b);    
    printf("The address of a is %u\n",&a);
    printf("The address of b is %d\n",&b);
    printf("The value of b is %d\n",*(&b));
    return 0;
}