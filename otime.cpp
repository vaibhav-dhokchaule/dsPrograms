#include<iostream>
using namespace std;
class t
{
//int h,m,s,x,y,z;
public:int h,m,s,x,y,z;
t(){}
t(int a,int b,int c)
{
h=a;
m=b;
s=c;
}
void operator ++()
{
s=++s;
x=s/60;
s=s%60;
m=m+x;
y=m/60;
m=m%60;
h=h+y;
}
void operator --()
{
if(s==00)
{
s=59;
m=m-1;
h=h;
}
else if(s==0&&m==0)
{
s=59;
m=59;
h=h-1;
}
else
{
s=s-1;
m=m;
h=h;
}
}
friend istream &operator>>(istream &,t &);
friend ostream &operator<<(istream &,t &);
};

istream &operator>>(istream &in,t &p)
{
cout<<"\nEnter the hours";
in>>p.h;
cout<<"\nEnter the minutes";
in>>p.m;
cout<<"\nEnter the second";
in>>p.s;
return(in);
}

ostream &operator<<(ostream &out,t &p)
{
out<<"\nHour=";
out<<p.h;
out<<"\nminute=";
out<<p.m;
out<<"\nsecond=";
out<<p.s;
return(out);
}

int main()
{
t ob1(3,59,59);
cout<<ob1;
++ob1;
cout<<ob1;
--ob1;
cout<<"\nEnter the time";
t ob2;
cin>>ob2;
++ob2;
cout<<ob2;
--ob2;
cout<<ob2; 
}
