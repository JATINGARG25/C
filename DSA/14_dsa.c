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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value)
{
    if (isfull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return value;
    }
}

int peek(struct stack *s, int i)
{
    if (s->top - i + 1 < 0)
    {
        printf("Invalid Position");
    }
    else
    {
        return s->arr[s->top - i + 1];
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 45);
    push(s, 4);
    push(s, 95);
    push(s, 35);

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("The value at %d is %d.\n", i, peek(s, i));
    }

    // printf("%d\n",s->arr[s->top]);       // Stack Top
    // printf("%d\n",s->arr[0]);       // Stack Bottom

    return 0;
}