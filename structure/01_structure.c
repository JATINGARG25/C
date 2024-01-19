#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
    };
int main()
{
    struct employee e1;
    e1.code=1000;
    e1.salary=345.56;
    strcpy(e1.name,"Jatin");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}