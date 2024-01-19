#include <stdio.h>
#include <string.h>
typedef struct employee {
    int code;
    float salary;
    char name[20];
} emp;
int main()
{
    emp e1;
    emp *ptr;

    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 567;
    strcpy(ptr->name, "Jatin");
    printf("The code of employee is : %d\n",e1.code);
    printf("The salary of employee : %f\n",e1.salary);
    printf("The name of employee is : %s\n",e1.name);
    return 0;
}