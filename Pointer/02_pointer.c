#include<stdio.h>
int main()
{
    int i;
    int *j=&i;
    int **k=&j;
    printf("address of i is %u\n",&i);
printf("address of i is %u\n",j);
printf("address of j is %u\n",&j);
    printf("address of j is %u\n",k);
    return 0;
}
