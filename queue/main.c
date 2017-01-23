#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    struct queue test;
    struct queue* q=&test;
    init(q);
    for(int i=0;i<2*N;i++)
    {
        in(q,i+1);
    }
    for(int i=0;i<2*N;i++)
    {
        printf("%d\t",out(q));
    }
    return 0;
}