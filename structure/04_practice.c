#include<stdio.h>
#include<string.h>
struct account{
    int number;
    char name[20];
    char type[20];

};
int main()
{
    struct account c1;
    c1.number=2222110;
    strcpy(c1.name,"Jatin");
    strcpy(c1.type,"savings");
    printf("Account number of the customer is %d.\n",c1.number);
    printf("Name of the customer is %s.\n",c1.name);
    printf("Type of bank account %s.\n",c1.type);
    return 0;
}