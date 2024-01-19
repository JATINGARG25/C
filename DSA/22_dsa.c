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
    if (q->r == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *q , int value){
    if(isfull(q)){
        printf("Queue Overflow!!\n");
    }
    else{
        q->r++;
        q->arr[q->r] = value;
    }
}

int dequeue(struct Queue *q){

    int a = -1;
    if(isempty(q)){
        printf("Queue Is Empty!!\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){

    struct Queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // if(isempty(&q)){
    //     printf("Queue is empty.\n");
    // }
    // else{
    //     printf("Queue is not empty.\n");
    // }

    enqueue(&q,12);
    enqueue(&q,3);
    enqueue(&q,2);
    enqueue(&q,1);

    printf("\nDequeue Element Is: %d\n",dequeue(&q));

    if (isempty(&q)){
        printf("Queue is empty\n");
    }
    if (isfull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}