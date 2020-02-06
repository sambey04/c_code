#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node * ptr;
};

int main()
{

struct node *first=NULL;
struct node *second=NULL;

first = (struct node*)malloc(sizeof(struct node));

second = (struct node*)malloc(sizeof(struct node));

first->data=1;
first->ptr=second;

second->data=2;
second->ptr=NULL;
printf("ram");
struct node *pt=first;

while(pt!=NULL)
{
printf("%d",pt->data);
pt=pt->ptr;

}

}
