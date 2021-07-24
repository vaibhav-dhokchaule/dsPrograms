#include<iostream>
using namespace std;
class cuboid
{
float l,b,h,m,v,d;
public:
void getdata(void);
float volume(void);
float surfacearea(void);
float density(void);
};

void cuboid::getdata(void)
{
cout<<"Enter the length";
cin>>l;
cout<<"Enter the breadth";
cin>>b;
cout<<"Enter heigth";
cin>>h;
cout<<"Enter mass";
cin>>m;
}
float cuboid::volume(void)
{
return(l*b*h);
}
float cuboid::surfacearea(void)
{
return(2*(l*b*h));
}
float cuboid::density(void)
{
v=volume();
d=m/v;
return d;
}
int main()
{
cuboid ob1;
ob1.getdata();
cout<<"\nvolume="<<ob1.volume();
cout<<"\nsurface area="<<ob1.surfacearea();
cout<<"\ndensity="<<ob1.density();
}
