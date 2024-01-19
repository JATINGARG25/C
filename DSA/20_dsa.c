#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct Queue *q){
    if (q->f == q->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct Queue *q){
    if ((q->r+1)%q->size == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *q , int value){
    if(isfull(q)){
        printf("Queue Overflow.\n");
    }
    else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = value;
        printf("Enqueue Element Is: %d\n",value);
    }
}

int dequeue(struct Queue *q){

    int value = -1;

    if(isempty(q)){
        printf("Queue Is Empty.\n");
    }
    else{
        q->f = (q->f+1)%q->size;
        value = q->arr[q->f];
    }
    return value;
}

int main(){

    struct Queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q,12);
    enqueue(&q,3);
    enqueue(&q,2);

    printf("\nDequeue Element Is: %d\n",dequeue(&q));
    printf("Dequeue Element Is: %d\n",dequeue(&q));
    printf("Dequeue Element Is: %d\n",dequeue(&q));

    enqueue(&q,1);
    enqueue(&q,1);
    enqueue(&q,1);

    if (isempty(&q)){
        printf("Queue is empty\n");
    }
    if (isfull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}