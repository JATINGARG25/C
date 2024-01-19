#include <stdio.h>
int main()
{
    char name1[10], name2[10];
    float salary1, salary2;
    printf("Enter the name of the first employee:\n");
    scanf("%s", name1);
    printf("Enter the salary of the first employee:\n");
    scanf("%f", &salary1);
    printf("Enter the name of the second employee:\n");
    scanf("%s", name2);
    printf("Enter the salary of the second employee:\n");
    scanf("%f", &salary2);

    FILE *ptr;
    ptr = fopen("data.txt","w");
    fprintf(ptr,"Name and salary of first employee is %s , %f\n",name1,salary1);
    fprintf(ptr,"Name and salary of second employee is %s , %f\n",name2,salary2);

    return 0;
}