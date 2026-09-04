#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
        int rollnumber;
        char name[20];
        float percentage;
        struct stu *next;
};
extern struct stu *head;
void add_node(void);
void delete_node(void);
void print_node(void);
void savefile(void);
void sort_data(void);
int countnode(void);
void deleteall(void);
void reversedata(void);
void searchnode(void);
