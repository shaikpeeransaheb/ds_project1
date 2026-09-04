#include<stdio.h>
#include"header.h"
void add_node()
{
        struct stu*new;
        int c=1;
        new=malloc(sizeof(struct stu));
        printf("enter name,percentage:\n");
        scanf("%s %f",new->name,&new->percentage);
        struct stu *p=head,*q=p;
        if(p!=0)
        {
                while(p)
                {
                        if(c!=p->rollnumber)
                                break;
                                c++;
                                q=p;
                                p=p->next;
                }
        }
        new->rollnumber=c;
        if(head==0)
        {
                new->next=0;
                head=new;
        }
        else if(head==p)
        {
new->next=head;
                head=new;
        }
        else
        {
                new->next=p;
                q->next=new;
        }
}
