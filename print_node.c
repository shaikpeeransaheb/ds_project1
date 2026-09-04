#include"header.h"
void print_node()
{
        struct stu *ptr=head;
        if(ptr==0)
        {
                printf("no records found\n");
                return ;
        }
        while(ptr)
        {
                printf("%d %s %f\n",ptr->rollnumber,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
}
