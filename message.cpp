#include<iostream>
#include<string.h>
 using namespace std;
class message
{
char name[30];
int a,i,n,l;
public:void getdata(void);
void putdata(void);
void encrypt(void);
void decrypt(void);
};
void message::getdata(void)
{cout<<"Enter string";
cin>>name;
l=strlen(name);
cout<<"\n l= \t"<<l;
while(l<8)
{
cout<<"\nEnter string";
cin>>name;
l=strlen(name);
}
}

void message::putdata(void)
{
cout<<"\n message= \t"<<name;
}

void message::encrypt(void) 
{
cout<<"\nEnter key value to encrypt";
cin>>a;
for(i=0;i<l;i++)
{
name[i]=name[i]+a;
cout<<name[i];
}
}

void message::decrypt(void)
{
for(i=0;i<l;i++)
{
name[i]=name[i]-a;
cout<<name[i];
}
}

int main()
{
message ob1;
ob1.getdata();
ob1.putdata();
ob1.encrypt();
ob1.decrypt();
}
