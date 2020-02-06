#include<stdio.h>
#include <stdlib.h> 
struct node
{

	int  data;
struct node* next;


};

int main(){


struct node* head=NULL;
struct node* two=NULL;
struct node* three=NULL;

head=(struct node*)malloc(sizeof(struct node));
two=(struct node*)malloc(sizeof(struct node));
three=(struct node*)malloc(sizeof(struct node));


head->data=1;
head->next=two;

two->data=2;
two->next=three;

three->data=3;
three->next=NULL;


struct node* n=head;

while(n!=NULL)
{	printf("%d",n->data);
n=n->next;
}


}

