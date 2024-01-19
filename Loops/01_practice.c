#include<stdio.h>
int main()
{
    int n=1;
    int m;
printf("enter the value of m\n");
scanf("%d",&m);
printf("**** Multiplication table of %d ****\n",m);

while(n<=10){
    printf("%d*%d=%d\n",m,n,m*n);
    n++;
}
    return 0;
}