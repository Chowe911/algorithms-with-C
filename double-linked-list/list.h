#define N 10 // 宏定义链表长度

struct list 
{
    int data;
    struct list* prev;
    struct list* next;
};//单链表基本结构

struct list* init();//单链表初始化函数