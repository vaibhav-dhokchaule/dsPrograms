struct node
{
int info;
struct node *next;
};
struct node *rear;

void initqueue()
{
rear=NULL;
} 

void add(int x)
{
struct node *p=NULL;
p=((struct node *)malloc(sizeof(struct node)));
p->info=x;
p->next=NULL;
if(rear==NULL)
{
rear=p;
rear->next=rear;
}
else
{
p->next=rear->next;
rear->next=p;
rear=p;
}
}

int remove1()
{
int x;
struct node *front=NULL;
if(rear=rear->next)
{
x=rear->info;
free(rear);
}
else
{
front=rear->next;
x=front->info;
rear->next=front->next;
free(front);
}
return (x);
}

int isempty()
{
return(rear==NULL);
}
