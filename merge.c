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
mergesort(a,0,n-1);
printf("The sorted list is \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
mergesort(int a[10],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
merge(int a[10],int low,int mid,int high)
{
int i,j,k,b[10];
i=low;
j=mid+1;
k=0;
while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{
b[k++]=a[i++];
}
else
{
b[k++]=a[j++];
}
}
while(i<=mid)
{
b[k++]=a[i++];
}
while(j<=high)
{
b[k++]=a[j++];
}
for(i=low,k=0;i<=high;i++,k++)
a[i]=b[k];
}
