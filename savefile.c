#include"header.h"
void savefile(void)
{
        struct stu *p=head;
        if(p==0)
        {
                printf("no records found\n");
                return ;
        }
        FILE *fp;
        fp=fopen("data","w");
        while(p)
        {
                fprintf(fp,"%d %s %f\n",p->rollnumber,p->name,p->percentage);
                p=p->next;
        }
        printf("data saved in file\n");
}
