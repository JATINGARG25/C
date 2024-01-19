#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[20];
};
int main ()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //  (*ptr).code=101;
    ptr->code=101;                      // Both are same thing ... this and the above one 
      printf("%d",e1.code);             // -> it is a arrow operator
    return 0;
}