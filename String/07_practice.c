#include<stdio.h>
int occurence(char st[],char c){
    char *ptr=st;
    while(*ptr!='\0'){
        if (*ptr==c){
            printf("Character is present in the string\n");
        }
        ptr++;
    }
}
int main ()
{
    char jg[]="jatin";
    occurence(jg,'t');
    return 0;
}