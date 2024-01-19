#include<stdio.h>
void address(int a);
int main()
{
    int i;
    printf("Address of i is %u\n",&i);
    address(i);
    printf("Address of i is %u\n",i);
    return 0;
}
void address(int a){
    printf("The address of variable a is %u\n",&a);
}