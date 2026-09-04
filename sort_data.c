#include"header.h"
void sort_data(void)
{
        if(head==0)
        {
                printf("no records found\n");
                return ;
        }
         int c=countnode();
        int i,j;
        char ch;
        printf("p/P:for per \n and n/N:for name\n");
        scanf(" %c",&ch);
        struct stu *p1=head,*p2,t;
        if(ch=='p'||ch=='P')
        {
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(p1->percentage>p2->percentage)
                        {
                                t.rollnumber=p1->rollnumber;
                                strcpy(t.name,p1->name);
                                t.percentage=p1->percentage;

                                p1->rollnumber=p2->rollnumber;
                                strcpy(p1->name,p2->name);
 p1->percentage=p2->percentage;

                                p2->rollnumber=t.rollnumber;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
        }
else if(ch=='n'||ch=='N')
{
        for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(strcmp(p1->name,p2->name)>0)
                        {
                                t.rollnumber=p1->rollnumber;
                                strcpy(t.name,p1->name);
t.percentage=p1->percentage;

                                p1->rollnumber=p2->rollnumber;
                                strcpy(p1->name,p2->name);
                                p1->percentage=p2->percentage;

                                p2->rollnumber=t.rollnumber;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }
}
}

                                                              
