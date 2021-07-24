#include<iostream>
using namespace std;
int max(int,int);
int max(int *,int);
void max(int *,int,int);
int min(int,int);
int min(int *,int);
void min(int *,int,int);
int main()
{
int *a,m,n,l,x,y;
cout<<"\n how many values";
cin>>n;
a=new int[n];
cout<<"\nEnter actual values";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nThe large value from array is";
m=max(a,n);
cout<<"\n the large value is\t"<<m;
cout<<"\n Enter two values to compare";
cin>>x>>y;
m=max(x,y);
cout<<"\n the large value is\t"<<m;
cout<<"\nEnter the value to find out maximum values from ";
cin>>m;
max(a,n,m);
cout<<"\nThe min value from array is";
m=min(a,n);
cout<<"\n the min value is\t"<<m;
m=min(x,y);
cout<<"\n the min value is\t"<<m;
cout<<"\nEnter the value to find out minimum values from ";
cin>>m;
min(a,n,m);
}

int max(int a,int b)
{
if(a>b)
return(a);
else
return(b);
}

 void max(int *p,int j,int k)
{
cout<<"\nThe values are\t";
for(int i=0;i<j;i++)
{
if(p[i]>k)
cout<<p[i]<<"\t";
}}

 int max(int *p,int j)
{
int t=p[0];
for(int i=0;i<j;i++)
{
if(t<p[i])
t=p[i];
}
return(t);
}
int min(int a,int b)
{
if(a<b)
return(a);
else
return(b);
}

 void min(int *p,int j,int k)
{
cout<<"\nThe values are\t";
for(int i=0;i<j;i++)
{
if(p[i]<k)
cout<<p[i]<<"\t";
}}

 int min(int *p,int j)
{
int t=p[0];
for(int i=0;i<j;i++)
{
if(t>p[i])
t=p[i];
}
return(t);
}



