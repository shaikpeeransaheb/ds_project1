#include"header.h"
struct stu *head=0;
int main()
{

        int c=0;
        char op;
        while(1)
        {
                printf("enter your choice:\n");
                printf("a/A)add_node d/D)delete_node s/S)print_node v/V)savefile.c t/T)sort_data c/C)countnode l/L)deleteall r/R)reversedata m/M)searchnode z)exit\n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A':
                        case 'a':add_node();break;
                        case 'D':
                        case 'd':delete_node();break;
                        case 'S':
                        case 's':print_node();break;
                        case 'V':
                        case 'v':savefile();break;
                        case 'T':
                        case 't':sort_data();break;
                        case 'C':
                        case 'c':c=countnode();
                        printf("total count :%d\n",c);break;
                        case 'L':
                        case 'l':deleteall();break;
                        case 'R':
                        case 'r':reversedata();break;
                        case 'M':
                        case 'm':searchnode();break;
                        case 'z':exit(0);
                }

        }
}
