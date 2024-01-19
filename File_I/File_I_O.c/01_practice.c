#include<stdio.h>
int main()
{
    FILE *ptr;
    int a , b ,c;
    ptr = fopen("sample.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c );
    printf("The values of a b and c is %d %d %d.\n",a,b,c);
    return 0;
}