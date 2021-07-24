#include<iostream>
using namespace std;
int add(int a)
{
return(a+a+a);
}
float add(float a,float b)
{
return(a+b+b);
}
int add(int a,int b)
{
return(a+a+b);
}
int add(int a,int b,int c)
{
return(a+b+c);
}

int main()
{
int add(int);
int add(int,int);
int add(int,int,int);
int add(float,float);
cout<<"Enter the value for x,y,z";
int x,y,z;
cin>>x>>y>>z;
cout<<"\n";
cout<<add(x,y,z);
cout<<"\n";
cout<<add(x);
cout<<"\n";
cout<<add(y,z);
cout<<"\n";
cout<<"Enter the value for l and m";
float l,m;
cin>>l>>m;
cout<<"\n";
cout<<add(l,m);
}
