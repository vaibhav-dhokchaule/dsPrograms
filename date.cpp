#include<iostream>
using namespace std;
class d
{
int day,month,year;
public:
void getdata(void);
void putdata(void);
void add(void)
{
day=day*1000000;
month=month*10000;
cout<<"\n"<<day+month+year<<"\n";
}
};
void d::getdata(void)
{
cout<<"\n Enter day";
cin>>day;
cout<<"\n Enter year";
cin>>month;
cout<<"\nEnter year";
cin>>year;
}

void d:: putdata(void)
{
cout<<"day="<<"\t "<<day;
cout<<"month="<<"\t "<<month;
cout<<"year="<<"\t "<<year;
}

int main()
{
d ob1;
ob1.getdata();
ob1.putdata();
ob1.add();
}
