#include<stdio.h>
void printpattern(int a);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printpattern(n);
    return 0;
}
void printpattern(int a){
    if (a==1){
        printf("*\n");
        return;
    }
    printpattern(a-1);
    for( int i=0;i<(2*a-1);i++){
        printf("*");
    }
    printf("\n");
}