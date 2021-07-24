#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
int i;
ofstream A;
char ch[20],a[10],b[10];
cout<<"\n Enter the string";
gets(ch);
cout<<"\n Enter name of the file";
cin>>a;
cout<<"\n Enter name of the file";
cin>>b;
A.open(a);
int l=strlen(ch);
for(i=0;i<l;i++)
{
A.put(ch[i]);
}
A.close();
ifstream B;
B.open(a);
ofstream ob;
ob.open(b);
char c;
int s=0,n=0,k=0;
while(B)
{
B.get(c);
if(c==' ')
{
s++;
}
if(c=='\n'|c==' ')
{
n++;
s++;
}
if(isalpha(c))
{
k++;
}
c=toupper(c);
ob.put(c);
}
s--;
n--;
k--;
B.close();
ob.close();
ifstream ob1;
ob1.open(b);
char x;
cout<<"\n The file after copy"; 
for(i=0;i<l;i++)
{
ob1.get(x);
cout<<x;
}
ob1.close();
cout<<"\n Total no. of words are"<<s;
cout<<"\n Total no. of  lines are"<<n;
cout<<"\n Total no. of  chars are"<<k;
}

