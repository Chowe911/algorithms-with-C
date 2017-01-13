#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc,char* argv[])
{
    struct list* head=init();
    struct list* use=head->next;
    for(int i=0;use->next!=NULL;i++)
    {
        printf("%d\n",use->data);
        use=use->next;
    }
    return 0;
}
