#include<stdio.h>
#include "linearqueue.h"
void main()
{
struct queue pq;
int n,k,ch,q=0,x;
initqueue(&pq);
do
{
printf("1.add\n 2.delete\n 3.peek\n 4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the value \n");
          scanf("%d",&k);
          isfull(&pq);
          add(&pq,k);
          break;
case 2:if(isempty(&pq))
           {
           printf("queue is full\n");
           }
           else
          {
            printf("The deleted element is %d",remove1(&pq));
           }
           break;
case 3:printf("The peek element is %d",peek(&pq));
          break;
case 4:q=1;
           break;
}
}while(q==0);
}
