#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getc.txt","r");
     c = fgetc(ptr);
    while (c!=EOF)                   // End of file
    {
    printf("%c\n",c);
    c = fgetc(ptr);
    }
    
    return 0;
}