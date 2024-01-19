#include<stdio.h>
int fibonacci(int n);
int main()
{
    int a ;
    printf(" Enter the value of a\n");
    scanf("%d",&a);
    printf("Fibonacci series of %d is  %d",a,fibonacci(a));
    
    return 0;
}
int fibonacci(int n){
    if(n<2){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}