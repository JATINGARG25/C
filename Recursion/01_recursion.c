#include<stdio.h>
int factorial(int x);
int main()
{
    int a ;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Value of factorial of %d is %d\n",a,factorial(a));
    

    return 0;
}
int factorial(int x){
    if (x==0 || x==1){
        return 1;
    }
    else {
        return factorial(x-1)*x;
    }
}