#include "stack.h"
#include<stdlib.h>
void init(struct stack * s)
{
    s->top=0;
    return ;
}

void push(struct stack * s,int data)
{
    s->top++;
    s->data[s->top]=data;
    return ;
}

int pop (struct stack * s)
{
    if(!empty(s))
    {
        perror("underflow");
        return 0;
    }
    else
    {
        s->top--;
        return s->data[s->top+1];
    }
}

int empty(struct stack * s)
{
    if(s->top==0)return 0;
    else return 1;
}