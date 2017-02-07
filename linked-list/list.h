#define N 10 // 宏定义链表长度

struct list 
{
    int data;
    struct list* next;
};//单链表基本结构

struct list* init();//单链表初始化函数，返回初始化的链表
struct list* search(struct list* l,int key);//单链表搜索函数，返回目标的前一个指针
int delete(struct list* l,int key);//单链表删除函数，删除一个元素，成功返回1，否则返回0
int insert(struct list* l,int key,int loc);//单链表插入函数，在指定位置后面插入一个元素，成功返回1，否则返回0
