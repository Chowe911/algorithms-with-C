#include "stack.h"
#include <stdio.h>

int main(int argc,char* argv[])
{
    struct stack test;
    struct stack* s=&test;
    init(s);
    //push(s,4);
    printf("%d\n",pop(s));
    return 0;
}