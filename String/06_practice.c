#include<stdio.h>
int  occurence(char st[],char c){
    char *ptr=st;
    int count = 0 ;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
ptr++;
    }
    return count;
}
int  main()
{
    char st[]="jatin";
    int count =occurence(st,'7');
    printf("Occurence = %d",count);
    return 0;
}