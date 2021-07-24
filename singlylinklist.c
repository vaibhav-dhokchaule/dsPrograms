#include<stdio.h>
#include<malloc.h>
#include "singly.h"
void main()
{
struct node *head=NULL;
struct node *create();
struct node *insert();
struct node *delete();
int ch,i,key,q=0;
int search();
void display();
head=((struct node *)malloc(sizeof(struct node)));
head->next=NULL;
do{
printf("\n 1.create \n 2.insert \n 3.delete");
printf("\n 4.search \n 5.display \n 6.exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:head=create(head);
       display(head);
       break;
case 2:head=insert(head);
       display(head);
       break;
case 3:head=delete(head);
       display(head);
       break;
case 4:printf("\nEnter the value of search ");
       scanf("%d",&key);
       i=search(head,key);
       if(i==-1)
       printf("\nThe key is not found");
       else
       printf("\n The value is found at %d th positon",i);
       break;
case 5:display(head);
       break;
case 6:q=1; 
        break;
}
}while(q==0);
}
