#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc,char* argv[])
{
    struct list* head=init();
    struct list* use=head->next;
    for(;use->next!=NULL;)
    {
        printf("%d\n",use->data);
        use=use->next;
    }
    do
    {
        use=use->prev;
        printf("%d\n",use->data);
    }while(use->prev!=NULL);
    return 0;
}
