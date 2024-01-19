#include<stdio.h>
#include<stdlib.h>

struct Node {  
    int data;
    struct Node *next;
};

// Traversal Function

void traversal(struct Node *ptr){

    while(ptr != NULL){

        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

// Deleting The First Node

struct Node *delatfirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Deleting A Node In-Between

struct Node *delinbet(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0 ; i < index-1 ;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Deleting The Last Node

struct Node *delatlast(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return (head);
}

// Deleting A Node With A Given Value

struct Node *delforvalue(struct Node *head , int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 25;
    head->next = second;

    second->data = 35;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = NULL;

    printf("Linked List Before Deletion\n");
    traversal(head);

    // head = delatfirst(head);

    // head = delinbet(head,2);

    // head = delatlast(head);

    head = delforvalue(head,40);

    printf("Linked List After Deletion\n");
    traversal(head);

    return 0;
}