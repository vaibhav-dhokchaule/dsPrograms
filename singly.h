struct node
{
int info;
struct node *next;
};

struct node *create(struct node *head)
{
struct node *p=NULL,*temp=NULL;
int i,n;
printf("How many values\n");
scanf("%d",&n);
temp=head;
printf("Enter the actual value\n");
for(i=0;i<n;i++)
{
p=((struct node *)malloc(sizeof(struct node)));
scanf("%d",&p->info);
p->next=NULL;
temp->next=p;
temp=p;
}
return(head);
}

void display(struct node *head)
{
struct node *temp=NULL;
temp=head->next;
do
{
printf("%d\t",temp->info);
temp=temp->next;
}while(temp!=NULL);
}

struct node *insert(struct node *head)
{
struct node *p=NULL,*temp=NULL;
int i,pos;
printf("\n Enter the posion");
scanf("%d",&pos);
for(temp=head,i=1;i<pos&&temp!=NULL;i++)
{
temp=temp->next;
}
if(temp!=NULL)
{
p=((struct node *)malloc(sizeof(struct node)));
printf("Enter the value\n");
scanf("%d",&p->info);
p->next=NULL;
p->next=temp->next;
temp->next=p;
}
else
{
printf("position out of order\n");
}
return(head);
}

struct node *delete(struct node *head)
{
struct node *temp=NULL,*p=NULL;
int i,pos;
printf("Enter the position of element is to be delete\n");
scanf("%d",&pos);
for(temp=head,i=1;i<pos&&temp->next!=NULL;i++)
{
temp=temp->next;
}
if(temp->next!=NULL)
{
p=temp->next;
temp->next=p->next;
printf("The deleted element is %d\n",p->info);
free(p);
}
else
{
printf("position out of order\n");
}
return(head);
}

int search(struct node *head,int key)
{
struct node *temp=NULL;
int i;
for(temp=head->next,i=1;temp->next!=NULL;temp=temp->next,i++)
{
if(temp->info==key)
return (i);
return (-1);
}
}

