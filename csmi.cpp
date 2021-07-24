#include<iostream>
using namespace std;
class student
{
protected:int id;
char name[10];
public:void accept(void)
{
cout<<"\n Enter Roll no=";
cin>>id;
cout<<"\n Enter name=";
cin>>name;
}
void display(void)
{
cout<<"\n Roll no="<<"\t"<<id;
cout<<"\n name="<<"\t"<<name;
}
};
class studentexam
{
protected:int a[10],n,i;
public:void accept(void)
{
cout<<"\n Enter How many subject";
cin>>n;
cout<<"\nEnter marks";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
void display(void)
{
cout<<"\nmarks of "<<n<<" subjects";
for(i=0;i<n;i++)
{
cout<<"\nmarks of "<<i+1<<" subject";
cout<<a[i];
}
}
};

class studentresult:public student,public studentexam
{
int t;
float per;
char g;
public:studentresult()
{
t=0;
per=0.0;
g='D';
}
void display(void)
{
student::display();
studentexam::display();
for(i=0;i<n;i++)
{
t=t+a[i];
}
per=t/n;
if(per>=70)
g='o';
else if(per>=60)
g='A';
else if(per>=50)
g='B';
else if(per>=40)
g='C';
cout<<"\n Total marks="<<"\t"<<t;
cout<<"\nPercentage="<<"\t"<<per;
cout<<"\nGrade="<<"\t"<<g;
}
};

int main()
{
int m,p;
studentresult ob[10];
cout<<"How many student";
cin>>m;
cout<<"\n Enter info\n";
for(p=0;p<m;p++)
{
ob[p].student::accept();
ob[p].studentexam::accept();
}
for(p=0;p<m;p++)
{
ob[p].display();
}
}
