#include<stdio.h>
int strlen(char *str){
    char *ptr=str;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[]="jatin";
    int l=strlen(str);
    printf("The lenght of str is %d",l);
    return 0;
}