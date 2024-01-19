#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp){
    printf("The code of employee is : %d\n", emp.code);
    printf("The salary of employee : %f\n",emp.salary);
    printf("The name of employee is : %s\n",emp.name);
}
int main ()
{
    struct employee e1;
    e1.code=321;
    e1.salary=45;
    strcpy(e1.name,"Jatin");
    show(e1);
    return 0;
}