#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt","w");
    int num = 565;
    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Jai baba ki");
    fclose(ptr);

    return 0;
}
