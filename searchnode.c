#include"header.h"
void searchnode(void)
{
        if(head==0)
        {
                printf("no records found:\n");
                return ;
        }
        int f;
        char ch;

                printf("enter r/R :for rollnumber and n/N:for name and p/P:for percentage");

        printf("enter a char\n");
        scanf(" %c",&ch);
        if(ch=='r'||ch=='R')
        {
                int num;
                printf("enter a num:\n");
                scanf("%d",&num);
                struct stu *ptr=head;
                while(ptr)
                {
                        if(ptr->rollnumber==num)

                        {
                                printf("enter a string and number:\n");
                                scanf("%s %f",ptr->name,ptr->percentage);
                                f=1;
}
                                ptr=ptr->next;
                }
                if(f==0)
                printf("num not found\n");
        }
        else if(ch=='n'||ch=='N')
        {

        char s[20];
        printf("enter a name\n");
        scanf("%s",s);

        struct stu *ptr=head;
                while(ptr)
                {
                        if(strcmp(ptr->name,s)==0)
                        {
                                printf("%d %s %f\n",ptr->rollnumber,ptr->name,ptr->percentage);

                                f=1;
                        }
                                ptr=ptr->next;
                }
                if(f==0)
                        printf("no name found\n");
}
        else if(ch=='p'||ch=='P')
        {

        int percentage;
        printf("enter a percentage\n");
        scanf("%d",&percentage);

        struct stu *ptr=head;
                while(ptr)
                {
                        if(ptr->percentage==percentage)
                        {
                                printf("%d %s %f\n",ptr->rollnumber,ptr->name,ptr->percentage);

                                f=1;
                        }
                                ptr=ptr->next;
                }
                if(f==0)
                        printf("no percentage found\n");


}
}
