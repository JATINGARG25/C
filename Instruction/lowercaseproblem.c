#include<stdio.h>
int main()
{
    char jatin;
    printf("enter your character\n");
    scanf("%c",&jatin);
    
    if (jatin<=122 && jatin>=97){
        printf("it is a lowercase");
    }
    else{
        printf("it is not a lowercase");
    }
    return 0;
}