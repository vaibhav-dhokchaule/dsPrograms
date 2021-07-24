#include<stdio.h>
main()
{
char a[50];
int i,n;
char bubble(char a[50],int n);
printf("How many characters\n");
scanf("%d",&n);
printf("Enter the characters\n");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
bubble(a,n);
for(i=0;i<n;i++)
{
printf("%s\t",a[i]);
}
}
char bubble(char a[50],int n)
{
int i,pass,temp;
for(pass=1;pass<n;pass++)
{
for(i=0;i<n-pass;i++)
{
if(a[i]<a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
}
