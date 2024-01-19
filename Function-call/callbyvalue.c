#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("The value of a and b is %d and %d.\n",a,b);
    printf("The value of a + b is %d.\n",sum(a,b));
    printf("The value of a and b after function call is %d and %d.\n",a,b);
    return 0;
}
int sum(int x, int y){
    int result=x+y;
    return result;
}