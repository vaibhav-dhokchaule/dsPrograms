#include<iostream>
using namespace std;
class bank
{
int accno;
char type[10],name[10];
float bal;
static int j;
public:
bank()
{
bal=500;
}
void getdata(void);
void putdata(void);
void withdraw();
void deposite();
int acc();
};
int bank::j=820001; 

void bank::getdata(void)
{
accno=j;
cout<<"\nEnter owner name"<<"\t";
cin>>name;
cout<<"\nEnter accunt type"<<"\t";
cin>>type;
j++;
} 

void bank::putdata()
{
cout<<"owner name"<<"\t"<<name;
cout<<"account no"<<"\t"<<accno;
cout<<"account type"<<"\t"<<type;
cout<<"Balance= "<<bal;
}
void bank::withdraw()
{
int k;
cout<<"\nEnter the amount to withdraw";
cin>>k;
bal=bal-500;
if(bal>=k)
{
bal=bal-k;
}
else
{
cout<<"Amount is insufficient";
}
bal=bal+500;
}
void bank::deposite()
{
int k;
cout<<"\n Enter the amount to deposite";
cin>>k;
bal=bal+k;
}
int bank::acc()
{
return accno;
}
int main()
{
bank b[10];
int i,n,q=0,t=0,ch;
cout<<"How many account";
cin>>n;
do
{
cout<<"\n1.Enter details\n2.display info\n3.withdraw\n4.deposite";
cout<<"\n5.Exit\n Enter your choice";
cin>>ch;
switch (ch)
{
case 1:for(i=0;i<n;i++)
          {
            b[i].getdata();
          }
          break;
case 2:for(i=0;i<n;i++)
          {
           b[i].putdata();
          }
break;
case 3:int f;
           cout<<"\n Enter the amount";
           cin>>f;
           for(i=0;i<n;i++)
           {
            if(f==b[i].acc())
             {
              b[i].withdraw();
               t=1;
              }
             }
            if(t==1)
             {
              cout<<"Account no is not present";
              }
break;
case 4:int g;
           cout<<"Enter account no";
           cin>>g;
            for(i=0;i<n;i++)
            {
            if(g==b[i].acc())
             {
              b[i].deposite();
               t=1;
              }
            }
           if(t==1)
            {
            cout<<"Account no is not present";
            }
break;
case 5:q=1;
}
}while(q==0);
}
