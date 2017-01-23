#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void init(struct queue* q)
{
    q->head=1;
    q->tail=1;
}

void in(struct queue* q,int data)
{
    if(q->head==(q->tail+1)%N)
    {
        perror("overfolw");
    }
    else
    {
        q->data[q->tail]=data;
        if(q->tail==N) q->tail=1;
        else    q->tail++;
    }
}

int out(struct queue* q)
{
    if(q->head==q->tail)
    {
        perror("underfolw");
        exit(-1);
    }
    else
    {
        int temp=q->data[q->head];
        if(q->head==N)  q->head=1;
        else    q->head++;
        return temp;
    }
    
}