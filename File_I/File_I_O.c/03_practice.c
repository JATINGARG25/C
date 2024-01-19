#include <stdio.h>
int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("03_practice.txt", "r");
    ptr2 = fopen("03_practicew.txt", "w");
    char c;
    c = fgetc(ptr1);
    while (c != EOF)
    {
        printf("%c", c);
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}