#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr, char value)
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

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return value;
    }
}

int stacktop (struct stack *sp){
    return sp->arr[sp->top];
}

int precidence(char ch){

    if (ch == '*' || ch == '/'){
        return 3;
    }
    else if (ch == '+' || ch == '-'){
        return 2;
    }
    else{
        return 0;
    }
}

int aoperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 1;
    }
    else{
        return 0;
    }
}
char *infixtopostfix(char *infix){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));

    int i = 0;
    int j = 0;

    while(infix[i] != '\0'){
        if (!aoperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }

        else{
            if (precidence(infix[i]) > precidence(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main(){

    char *infix = "a-b+c*d/e+m-k";

    printf("Postfix is %s",infixtopostfix(infix));
    return 0;
}