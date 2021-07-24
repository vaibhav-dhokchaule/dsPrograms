#include<stdio.h>
main()
{
int a[10],i,n;
printf("How many elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quicksort(a,0,n-1);
printf("The sorted list is \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
quicksort(int a[10],int lb,int ub)
{
int j;
if(lb<ub)
{
j=partion(a,lb,ub);
quicksort(a,lb,j-1);
quicksort(a,j+1,ub);
}
}
partion(int a[10],int lb,int ub)
{
int i,j,p,t;
i=lb+1;
p=a[lb];
j=ub;
do 
{
while((a[i]<p)&&(i<=ub))
i++;
while((a[j]>p)&&(j>lb))
j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}while(i<j);
a[lb]=a[j];
a[j]=p;
return(j);
}

