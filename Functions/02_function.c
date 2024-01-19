#include<stdio.h>
int sum(int a,int b);     // function prototype 
int main()
{
    int c;
    c=sum(2,67);                            // function call
    printf("The value of c is %d.\n",c);    // 2 and 5 are arguments 

    return 0;
}
int sum(int a , int b){                         //function defination
    int result;                                 // here a and b are parameters 
    result = a+b;                               // result is return value 
    return result;
}