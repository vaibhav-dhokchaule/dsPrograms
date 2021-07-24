#define max 5
struct stack
{
int top;
int data[max];
};

void initstack(struct stack *ps)
{
ps->top=-1;
}
struct stack s;

int isfull(struct stack *ps)
{
if(ps->top==max-1)
return 1;
else
return 0;
}

int isempty(struct stack *ps)
{
if(ps->top==-1)
return -1;
else
return 0;
}

void push(struct stack *ps,int x)
{
++ps->top;
ps->data[ps->top]=x;
}

int pop(struct stack *ps)
{
int x;
x=ps->data[ps->top];
ps->top--;
return x;
}

int peek(struct stack *ps)
{
return(ps->data[ps->top]);
}

