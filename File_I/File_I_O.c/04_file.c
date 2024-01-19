#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("putc.txt","w");
    putc('c',ptr);
    fclose(ptr);
    return 0;
}
