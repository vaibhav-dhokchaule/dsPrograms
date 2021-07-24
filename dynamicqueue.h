struct node
{
int info;
struct node *next;
};

struct node *rear=NULL,*front=NULL;


void initqueue()
{
front=rear=NULL;
} 

void add(int x)
{
struct node *p=NULL;
p=((struct node *)malloc(sizeof(struct node)));
p->info=x;
p->next=NULL;
if(front==NULL)
{
front=rear=p;
}
else
{
rear->next=p;
rear=p;
}
}

void remove1()
{
struct node *p=NULL;
p=front;
front=front->next;
printf("The deleted element is %d\n",p->info);
free(p);
if(front==NULL)
rear=NULL;
}

int isempty()
{
return(front==rear);
}
