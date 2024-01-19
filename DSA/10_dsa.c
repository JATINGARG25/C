#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void traversal(struct Node *head){
    struct Node *ptr = head;

    do
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;

    } while(ptr != head);
}

int main(){

    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = first;

    first->data = 13;
    first->next = second;

    second->data = 14;
    second->next = third;

    third->data  = 15;
    third->next = fourth;

    fourth->data = 16;
    fourth->next = head;

    traversal(head);

    return 0;
}