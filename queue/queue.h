#define N 100
struct queue
{
    int head;
    int tail;
    int data[N];
};

void init(struct queue* q);
void in(struct queue* q,int data);
int out(struct queue* q);