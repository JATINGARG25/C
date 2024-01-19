#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *previous;
    struct Node *next;
};

void traversal(struct Node *head, struct Node *fourth)
{
    struct Node *ptr = head;
    while (ptr != NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    struct Node *q = fourth;
    while(q->previous != 0){
        printf("%d\n",q->data);
        q = q->previous;
    }
    printf("%d\n",q->data);

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

    head->previous = NULL;
    head->data = 12;
    head->next = first;

    first->previous = head;
    first->data = 14;
    first->next = second;

    second->previous = first;
    second->data = 16;
    second->next = third;

    third->previous = second;
    third->data = 18;
    third->next = fourth;

    fourth->previous = third;
    fourth->data = 20;
    fourth->next = NULL;

    traversal(head,fourth);

    return 0;
}
