#include<iostream>
#include<cstring>
using namespace std;
class printdata
{
int a,b,l,i,m;
char*name,c;
public:void  getdata(int x,int y,char *s)
{
//cout<<"enter values for a&b";
//cin>>a>>b;
a=x;
b=y;
l=strlen(s);
name=new char[l+1];
strcpy(name,s);
}
void get(char x)
{
c=x;
}
void print(int a)
{
cout<<"<"<<a<<">";
}

void print(int a,int b)
{
cout<<"[<"<<a<<">"<<",<"<<b<<">]";
}

void print(char *name)
{
cout<<name;
}
void printf(int a,char *name)
{
for(i=0;i<=a;i++)
{
cout<<name[i];
}
cout<<"\"";
}
void print(char c,char *name)
{
m=0;
for(i=0;i<l;i++)
{
if(c==name[i])
//if(strcmp(c,name[i]))
{
m++;
}}
cout<<"the occurance of\t"<<c<<"\tin string\t"<<name<<"\tis\t"<<m;
}
};

int main()
{
printdata ob;
int p,q;
char *t,j;
cout<<"\n enter string";
cin>>t;
cout<<"enter value for p&q";
cin>>p>>q;
ob.getdata(p,q,t);
cout<<"\n output of print(int) is\n";
ob.print(p);
cout<<"\n output of print(int,int) is\n";
ob.print(p,q);
cout<<"\n output of print(char *) is\n";
ob.print(t);
cout<<"\n output of print(int n,char *) is\n";
ob.print(p,t);
cout<<"\n enter the character to count occurances";
cin>>j;
ob.get(j);
cout<<"output ot print*(char ch,char *) is\n";
ob.print(j,t);
cout<<"\n";
}

