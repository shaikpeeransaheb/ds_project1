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
        int n;
        printf("enter name to delete:\n");
        scanf("%s",s);
        struct stu *t=head;
        int c=0;
        while(t)
        {
                if(strcmp(t->name,s)==0)
                        c++;
                        t=t->next;
        }
        if(c==0)
                printf("name not found:\n");

        else if(c==1)
                {
                        struct stu *del=head,*prev=NULL;
                        while(del)
                        {
                                struct stu *p=del->next;
                        if(strcmp(s,del->name)==0)
                                {
                                        if(del==head)
                                                head=p;
                                                else
                                                        prev->next=p;
                                                        free(del);
                                                        break;
                                }
                                prev=del;
                                del=p;
                        }
                        printf("deleted\n");
                }

        else
        {
                int n;
                printf("duplicate name found %d times\nenter rollno to delete:\n",c);
                scanf("%d",&n);
                struct stu *del=head,*prev=NULL;
                int flag=0;
                while(del)
                {
                        struct stu *p=del->next;
                        if(strcmp(s,del->name)==0 &&n==del->rollnumber)
                        {
                                flag=1;
                                if(del==head)
                                        head=p;
                                        else
                                                prev->next=p;
                                                free(del);
                                                del=p;
                                                break;
                        }
                        else
                        {
                                prev=del;
                                del=p;
                        }
                }
                if(flag==0)
                        printf("rollno not foundfor that name\n");
                        else
                                printf("deleted\n");
        }
}
}



