#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    int num;
    ptr1= fopen("integer.txt","r");
    ptr2 = fopen("integerw.txt","w");
    
    fscanf(ptr1,"%d",&num);
    printf("%d",num);
    fprintf(ptr2,"%d\n",2*num);
    return 0;
}