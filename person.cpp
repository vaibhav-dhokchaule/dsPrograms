#include<iostream>
#include<cstring>
using namespace std;
class person
{
protected: char f[10],l[10];
int r;
public: void getdata(void)
{
cout<<"\nEnter Roll no";
cin>>r;
cout<<"\nEnter  first name";
cin>>f;
cout<<"\nEnter  last name";
cin>>l;
}
 void putdata(void)
{
cout<<"\n Roll no";
cout<<"\t"<<r;
cout<<"\n first name";
cout<<"\t"<<f;
cout<<"\n last name";
cout<<"\t"<<l;
}
};
class student:virtual public person
{
protected: char c[10];
int i,n;
public: void getsh(void)
{
getdata();

cout<<"\nEnter course";
cin>>c;

}
 void puts(void)
{
putdata();
//cout<<"\nthe info is";

cout<<"\n course";
cout<<"\t\t"<<c;

}
};
class teacher: virtual public person
{
protected: char dept[10];
public: void gett(void)
{
cout<<"\nenter dept";
cin>>dept;
}
 void putt(void)
{
//cout<<"\nthe info is";
cout<<"\ndept"<<"\t\t"<<dept;
}
};
class teaching:public student,public teacher
{
char lab[10];
public:
void getdata1(void)
{
//gets();
//gett();
cout<<"\nEnter lab";
cin>>lab;
}
 void putdata1(void)
{

//cout<<"\nthe info is";

cout<<"\nlab";
cout<<"\t\t"<<lab;

}
};
int main()
{
int m,p;

teaching t[10],*ob[10];
cout<<"\n how many teaching";
cin>>m;
for(p=0;p<m;p++)
{
ob[p]=&t[p];
ob[p]->getsh();
ob[p]->gett();
ob[p]->getdata1();
}
//cout<<"\n the info is \n";
for(p=0;p<m;p++)
{
cout<<"\n the info of object \t"<<p+1<<"\tis \n";
ob[p]->puts();
ob[p]->putt();
ob[p]->putdata1();
}
}

 
 
 
