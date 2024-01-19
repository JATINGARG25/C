#include<stdio.h>
int sum(int x, int y);
float average (int x,int y);
int main()
{ 
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    sum(a,b);
    printf("Sum of a and b is %d\n",sum(a,b));
    average(a,b);
    printf("Average of a and b is %f\n",average(a,b));
    return 0;
}
int sum(int x, int y){
    int z;
    z = x+y;
    return z;
}
float average(int x,int y){
    float result;
    result=(float)(x+y)/2;
    return result;
}