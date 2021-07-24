struct node
{
int info;
struct node *next,*prev;
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
p->next=p->prev=NULL;
temp->next=p;
p->prev=temp;
temp=p;
}
return(head);
}

void display(struct node *head)
{
struct node *temp1=NULL,*temp2=NULL;
temp1=head->next;
temp2=temp1;
do
{
printf("%d\t",temp1->info);
temp2=temp1;
temp1=temp1->next;
}while(temp1!=NULL);
printf("\n");
do{
printf("%d\t",temp2->info);
temp2=temp2->prev;
}while(temp2!=head);
}

struct node *insert(struct node *head)
{
struct node *p=NULL,*temp=NULL,*temp1=NULL;
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
p->next=p->prev=NULL;
if(temp->next!=NULL)
{
temp1=temp->next;
p->next=temp1;
temp1->prev=p;
temp->next=p;
p->prev=temp;
}
else
{
p->prev=temp;
temp->next=p;
}
}
else
{
printf("Position out of order\n");
}
return(head);
}

struct node *delete(struct node *head)
{
struct node *temp=NULL,*p=NULL,*temp1=NULL;
int i,pos;
printf("Enter the position of element is to be delete\n");
scanf("%d",&pos);
for(temp=head,i=1;i<pos&&temp!=NULL;i++)
{
temp=temp->next;
}
if(temp->next!=NULL)
{
p=temp->next;
if(p->next!=NULL)
{
temp1=p->next;
temp->next=temp1;
temp1->prev=temp;
}
else
{
temp->next=NULL;
}
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
else
return (-1);
}
}

