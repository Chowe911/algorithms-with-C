#include "list.h"
#include <stdlib.h>

struct list* init()
{
    struct list* head=(struct list*)malloc(sizeof(struct list));//头节点
    struct list* back=(struct list*)malloc(sizeof(struct list));//前一个节点
    struct list* forward;//下一个节点
    head->prev=NULL;
    head->next=back;
    back->prev=NULL;
    for(int i=1;i<N;i++)
    {
        forward=(struct list*)malloc(sizeof(struct list));
        back->data=i;
        back->next=forward;
        forward->prev=back;
        back=forward;
        
    }
    back->next=NULL;//尾节点next为空
    return head;
}