#include<stdio.h>
#include<ctype.h>
#include "stackstatic.h"
void main()
{
struct stack s;
char a[20],ch;
int i;
initstack(&s);
printf("\n Enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]==' ')||(a[i]=='\n'))
{
ch=pop(&s);
printf("%c",ch);
}
else
{
push(&s,a[i]);
}
printf(" ");
}
while(!isempty(&s))
{
ch=pop(&s);
printf("%c",ch);
}
}
