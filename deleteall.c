#include"header.h"
void deleteall()
{
        if(head==0)
        {
                printf("no records found:\n");
                return ;
        }
        struct stu *del=head;
        int c=1;
        while(del)
        {
                head=del->next;
                printf("node:%ddeleted\n",c++);
                free(del);
                del=head;
        }
}
