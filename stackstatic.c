#include<stdio.h>
#include"stackstatic.h"
void main()
{
struct stack s;
int n,ch,q=0,k;
initstack(&s);
do
{
printf("\n1.push\n2.pop\n3.peek\n4.exit");
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:if(isfull(&s))
           printf("The stack overflow\n");
           else
            {
            printf("Enter the value is to be pushed\n");
            scanf("%d",&n);
            push(&s,n);
            break;
            }
case 2:if(isempty(&s))
           printf("\n Stack underflow");
           else
           printf("poped element is %d",pop(&s));
           break;
case 3:k=peek(&s);
           printf("THe top element is %d",k);
           break;
case 4:q=1;
           break;
}
}while(q==0);
}
