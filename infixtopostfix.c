#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "stackstatic.h" 
void main()
{
void postfix();
void evaluate();
char in[20],post[20],priority[20],p[20];
printf("Enter the infix expression\n");
scanf("%s",in);
postfix(in,post);
printf("postfix expression is %s\t",post);
evaluate(post);
strcpy(p,post);
printf("\n");
}

int stacktop(struct stack *ps)
{
return(ps->data[ps->top]);
}

int priority(char ch)
{
switch(ch)
{
case '(':return 0;
case '+':
case '-':return 1;
case '*':
case '/':return 2;
case '^':return 3;
}
}

void postfix(char in[],char post[])
{

char ch,p;
int i,j=0;
struct stack s;
initstack(&s);
for(i=0;in[i]!='\0';i++)
{
if(in[i]=='(')
{
push(&s,in[i]);
}
else if(in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/'||in[i]=='^')
{
if(isempty(&s))
push(&s,in[i]);
else
{
while(priority(stacktop(&s))>=priority(in[i]))
{
ch=pop(&s);
post[j++]=ch;
}
push(&s,in[i]);
}
}else if(in[i]==')')
{
while(((ch=pop(&s))!='(')&&(!isempty(&s)))
post[j++]=ch;
}
else
{
post[j++]=in[i];
}
}
while(!isempty(&s))
{
post[j++]=pop(&s);
}
post[j]='\0';
}

void evaluate(char p[])
{
struct stack s;
int i,val,opnd1,opnd2;
initstack(&s);
for(i=0;p[i]!='\0';i++)
{
if(isalpha(p[i]))
{
printf("Enter the value for %c\n",p[i]);
scanf("%d",&val);
push(&s,val);
}
else
{
opnd2=pop(&s);
opnd1=pop(&s);
}
if(p[i]=='+')
{
push(&s,opnd1+opnd2);
}
else if(p[i]=='-')
{
push(&s,opnd1-opnd2);
}
else if(p[i]=='*')
{
push(&s,opnd1*opnd2);
}
else if(p[i]=='/')
{
push(&s,opnd1/opnd2);
}
else if(p[i]=='^')
{
push(&s,opnd1^opnd2);
}
}
printf("The result is %d",pop(&s));
}

