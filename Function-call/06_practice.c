#include<stdio.h>                          // not working because of call by value // related to practice number 3
int multiply(int x){
          int mul= x*10;
          return mul;
}
int main()
{
    int a=3;
    printf("Value of a is %d\n",a);
    multiply(a);
    printf("value of a after funtion call is %d\n",a);

    return 0;
}