#include<iostream>
using namespace std;
class media
{
protected:int id;
char title[10];
float price;
public:virtual void get()
{
cout<<"Enter id";
cin>>id;
cout<<"\nEnter title";
cin>>title;
cout<<"\nEnter price";
cin>>price;
}
virtual void display()
{
cout<<"\n id\t"<<id;
cout<<"\n name\t"<<title;
cout<<"\nprice\t"<<price;
}
};

class book:public media
{
protected:int pages;
char isbn;
public:void get()
{
media::get();
cout<<"\nEnter pages";
cin>>pages;
cout<<"\n Enter isbn";
cin>>isbn;
}
void display()
{
media::display();
cout<<"\nBook pages\t"<<pages;
cout<<"\n Book isbn\t"<<isbn;
}
};

class cd:public media
{
protected:int cap,h,m,s;
public:void get()
{
media::get();
cout<<"\n Enter cap";
cin>>cap;
cin>>h;
cin>>m;
cin>>s;
}
void display()
{
media::display();
cout<<"\n cap= \t"<<cap;
cout<<"\n h= \t"<<h;
cout<<"\n m= \t"<<m;
cout<<"\n s= \t"<<s;
}
};

int main()
{
media *b[10];
media *c[10];
book b1[10];
cd c1[10];
char g;
int n,m,i,ch=0;
do
{
cout<<"\nEnter B or b for book";
cin>>g;
if(g=='b'||g=='B')
{
cout<<"\nHow many books";
cin>>n;
for(i=0;i<n;i++)
{
b[i]=&b1[i];
b[i]->get();
}
}
else
{
cout<<"\nHow many cd";
cin>>m;
for(i=0;i<m;i++)
{
c[i]=&c1[i];
c[i]->get();
}
}
cout<<"\ndo you want to continue,if yes press 1";
cin>>ch;
}while(ch==1);
cout<<"\n The info of book";
for(i=0;i<n;i++)
{
b[i]->display();
}
cout<<"\n The info of cd is";
for(i=0;i<m;i++)
{
cout<<"\nThe cd\t"<<i+1<<"is";
c[i]->display();
}
}
