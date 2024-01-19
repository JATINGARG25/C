#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee jatin = {100,345.56,"jatin"};
    printf("Name is %s\n",jatin.name);
    printf("Code is %d\n",jatin.code);
    printf("Salary is %f\n",jatin.salary);
    return 0;
}

