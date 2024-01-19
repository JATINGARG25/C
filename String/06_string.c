#include<stdio.h>
#include<string.h>
int main()
{
    char st[]="jatin";
    char st2[]="garg";
    strcpy(st,st2);
    printf("Now the st is %s",st);
    return 0;
}