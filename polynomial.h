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
scanf("%d\t%d",&p->coef,&p->exp);
temp->next=p;
temp=p;
}
return(head);
}

void display(struct node *head3)
{
struct node *temp=NULL;
temp=head3->next;
do
{
printf("%d\t \n%d\t",temp->exp,temp->coef);
temp=temp->next;
}while(temp!=NULL);
} 
