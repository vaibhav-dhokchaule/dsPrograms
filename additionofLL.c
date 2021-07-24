#include<stdio.h>
#include<malloc.h>
struct node
{
int coef,exp;
struct node *next;
};

struct node *create(struct node *head)
{
struct node *p=NULL,*temp=NULL;
int i,n;
printf("How many values\n");
scanf("%d",&n);
temp=head;
for(i=0;i<n;i++)
{
p=((struct node *)malloc(sizeof(struct node)));
p->next=NULL; 
printf("Enter the coefficient\t Enter the Exponent\n");
scanf("%d%d",&p->coef,&p->exp);
temp->next=p;
temp=p;
}
return(head);
}

void display(struct node *head)
{
struct node *temp=NULL;
temp=head->next;
do{
printf("%d\t%d\n",temp->coef,temp->exp);
temp=temp->next;
}while(temp!=NULL);
} 

struct node *add(struct node *head1,struct node *head2,struct node *head3)
{
struct node *t1=NULL,*t2=NULL,*t3=NULL,*p=NULL;
t1=head1->next;
t2=head2->next;
t3=head3;
while(t1!=NULL&&t2!=NULL)
{
p=((struct node *)malloc(sizeof(struct node)));
p->next=NULL;
if((t1->exp)>(t2->exp))
{
p->coef=t1->coef;
p->exp=t1->exp;
t1=t1->next;
}
else if((t1->exp)<(t2->exp))
{
p->coef=t2->coef;
p->exp=t2->exp;
t2=t2->next;
}
else
{
p->coef=(t1->coef)+(t2->coef);
p->exp=t1->exp;
t1=t1->next;
t2=t2->next;
}
t3->next=p;
t3=p;
}
if(t1!=NULL)
t3->next=t1;
if(t2!=NULL)
t3->next=t2;
return(head3);
}

void main()
{
struct node *head1=NULL,*head2=NULL,*head3=NULL;
struct node *add();
struct node *create();
void display();
head1=((struct node *)malloc(sizeof(struct node)));
head1->next=NULL;
head2=((struct node *)malloc(sizeof(struct node)));
head2->next=NULL;
head3=((struct node *)malloc(sizeof(struct node)));
head3->next=NULL;
head1=create(head1);
head2=create(head2);
display(add(head1,head2,head3));
}
