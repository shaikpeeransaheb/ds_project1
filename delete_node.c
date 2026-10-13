#include"header.h"
void delete_node(void)
{
        if(head==0)
        {
                printf("no records found\n");
                return ;
        }
        char ch;
        int num,flag=0;
        printf("enter r/R:rollnumber n/N:name\n");
        scanf(" %c",&ch);
        if(ch=='r'||ch=='R')
        {
                printf("enter rollnumber:\n");
                scanf("%d",&num);
                struct stu *del=head,*prev;
                while(del)
                {
                        if(del->rollnumber==num)
                        {
                                if(del==head)

                                        head=head->next;
                                        else
                                                prev->next=del->next;
                                                free(del);
                                                return;
                        }
                        prev=del;
                        del=del->next;
                }
                printf("no rollnumber found:\n");
        }
        else if(ch=='n'||ch=='N')
        {
                char s[20];
                printf("enter name to delete:\n");
                scanf("%s",s);
                struct stu *del=head,*prev=0;
                while(del)
                {
                        struct stu *q=del->next;

                        if(strcmp(s,del->name)==0)
                        {
                                flag=1;
                                if(del==head)

                                        head=q;
                                        else
                                                prev->next=q;
                                                free(del);
                                                del=q;
                        }
                        else
                        {
                        prev=del;
                        del=q;
                        }
                }
                if(flag==0)
                        printf("name not found:\n");
}
}

