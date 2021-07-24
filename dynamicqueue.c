#include<stdio.h>
#include<malloc.h>
#include "dynamicqueue.h"
void main()
{
struct node *front=NULL,*rear=NULL;
int ch,n,q=0;
initqueue();
do
{
printf("1.Add\n2.Remove\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the value\n");
          scanf("%d",&n);
          add(n);
          break;
case 2:if(isempty())
           {
            printf("The queue is underflow\n");
           }
           else
          {
           remove1();
          }
          break;
case 3:q=1;
           break;
}
}while(q==0);
}
