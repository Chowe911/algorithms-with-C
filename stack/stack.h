#define N 10
struct stack
{
    int data[N];
    int top;
};

void init(struct stack * s);
void push(struct stack * s,int data);
int pop (struct stack * s);
int empty(struct stack * s);
