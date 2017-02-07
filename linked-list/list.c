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

struct list* search(struct list* l,int key)
{
    struct list* temp=l;
    
    while(temp->next!=NULL && temp->next->data!=key)//找到目标活着空时退出循环
        temp=temp->next;
    return temp;//返回目标或空
}

int delete(struct list* l,int key)
{
    struct list* temp=search(l,key);//先找到元素
    if(temp->next!=NULL)//删除元素
    {
        struct list* rm=temp->next;
        temp->next=temp->next->next;
        free(rm);
        return 1;
    }
    return 0;
    /*while(temp->next!=NULL && temp->next->data!=key)
    {
        temp=temp->next;
    }
    if(temp->next!=NULL)
    {
        struct list* tmp=temp->next;
        temp->next=temp->next->next;
        //int tmp=t->data;
        free(tmp);
        return 1;
    }
    return 0;
    */

}

int insert(struct list* l,int key,int loc)
{
    if(loc>N)return 0;
    else
    {
        struct list* temp=l;
        for(int i=0;i<loc;i++)
        {
            temp=temp->next;

        }//定位插入位置
        //插入
        struct list* add=(struct list*)malloc(sizeof(struct list));
        add->data=key;
        add->next=temp->next;
        temp->next=add;
        return 1;
    }
}