#include "list.h"
#include <stdlib.h>

struct list* init()
{
    struct list* head=(struct list*)malloc(sizeof(struct list));//头节点
    struct list* prev=(struct list*)malloc(sizeof(struct list));//前一个节点
    struct list* next;//下一个节点

    head->next=prev;
    for(int i=0;i<N;i++)
    {
        next=(struct list*)malloc(sizeof(struct list));
        prev->data=i;
        prev->next=next;
        prev=next;
        
    }
    prev->next=NULL;//尾节点next为空
    return head;
}