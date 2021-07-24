#include<iostream>
using namespace std;
class vector
{
int i,*arr,*brr,l,max,n,j,x,pos,pass;
public:vector(){}
vector(int a)
{
arr=new int[max=a];
cout<<"How many values";
cin>>n;
cout<<"Enter the values";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
}

void sort()
{
int k,key;
for(k=1;k<n;k++)
{
key=arr[k];
for(i=k-1;arr[i]>key&&i>=0;i--)
{
arr[i+1]=arr[i];
arr[i+1]=key;
}
}
}

void get()
{
cout<<"Enter the value to insert into array";
cin>>x;
i=n;
arr[i]=x;
n++;
}

void display()
{
cout<<"\n The vector is \n";
cout<<"(";
for(i=0;i<n;i++)
{
cout<<arr[i];
cout<<",";
}
cout<<")";
}
friend vector union1(vector,vector);
friend vector inter(vector,vector);
};

vector union1(vector a,vector b)
{
vector x;
a.i=0;
b.j=0;
x.l=0;
x.brr=new int[a.n+b.n];
while(a.i<a.n&&b.j<b.n)
{
if(a.arr[a.i]<b.arr[b.j])
{
x.brr[x.l]=a.arr[a.i];
a.i++;
x.l++;
}
else if(a.arr[a.i]>b.arr[b.j])
{
x.brr[x.l]=b.arr[b.j];
b.j++;
x.l++;
}
else
{
x.brr[x.l]=a.arr[a.i];
a.i++;
x.l++;
b.j++;
}
}
while(b.j<b.n)
{
x.brr[x.l]=b.arr[b.j];
x.l++;
b.j++;
}
while(a.i<a.n)
{
x.brr[x.l]=a.arr[a.i];
x.l++;
a.i++;
}
x.n=x.l;
cout<<"\n The union is \n";
cout<<"(";
for(x.i=0;x.i<x.n;x.i++)
{
cout<<x.brr[x.i];
cout<<",";
}
cout<<")";
return x;
}

vector inter(vector a, vector b)
{
vector x;
x.brr=new int[a.n];
x.l=0;
for(a.i=0;a.i<a.n;a.i++)
{
for(b.j=0;b.j<b.n;b.j++)
{
if(a.arr[a.i]==b.arr[b.j])
{
x.brr[x.l]=a.arr[a.i];
x.l++;
}
}
}
x.n=x.l;
cout<<"\n The intersection is ";
cout<<"(";
for(x.i=0;x.i<x.n;x.i++)
{
cout<<x.brr[x.i];
cout<<")";
return x;
}
}
int main()
{
vector ob1(10);
ob1.display();
ob1.sort();
ob1.display();
ob1.get();
ob1.display();
ob1.sort();
ob1.display();
vector ob2(6);
ob2.display();
ob2.sort();
ob2.display();
ob2.get();
ob2.display();
ob2.sort();
ob2.display();
vector ob3,ob4;
ob3=union1(ob1,ob2);
ob4=inter(ob1,ob2);
}
