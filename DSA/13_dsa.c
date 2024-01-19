#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value){
    if(isfull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int value  = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return value;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int)); 

    printf("%d\n",isEmpty(s));
    printf("%d\n",isfull(s));
    push(s,45);
    push(s,4);
    printf("%d\n",isEmpty(s));
    printf("%d\n",isfull(s));
    printf("%d\n",pop(s));
    return 0;
}