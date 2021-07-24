#include<stdio.h>
#include"stackstatic.h"
void main()
{
void postfix();
char in[20],post[20];
printf("Enter the infix expression\n");
scanf("%s",in);
postfix(in,post);
printf("postfix expression is\t");
printf("%s",post);
printf("\n");
}

void postfix(char in[20],char post[20])
{
char ch;
int i,j=0;
struct stack s;
initstack(&s);
for(i=0;in[i]!='\0';i++)
{
if(in[i]=='('||in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/')
{
push(&s,in[i]);
}
else if(in[i]==')')
{
while(((ch=pop(&s))!='(')&&(!isempty(&s)))
{
post[j++]=ch;
}
}else
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

