#include<iostream>
using namespace std;
class fraction
{
int a,b,c,d,e,r;
public:fraction(){}
          fraction(int x,int y)
          {
           a=x;
           b=y;
          }
int gcd(fraction a1,fraction a2)
{
while(a2.b!=0)
{
r=a1.b%a2.b;
a1.b=a2.b;
a2.b=r;
}
return a1.b;
}

int lcm(int n1,int n2)
{
e=(n1>n2)?n1:n2;
do
{
if((e%n1==0)&&(e%n2==0))
{
c=e;
break;
}
else
++e;
}while(true);
return c;
}
void add(fraction,fraction);
void sub(fraction,fraction);
void mul(fraction,fraction);
void div(fraction,fraction);
void putdata(void);
};
void fraction::putdata(void)
{
cout<<"\na="<<a<<"\nb="<<b;
}

void fraction::add(fraction ob1,fraction ob2)
{
r=lcm(ob1.b,ob2.b);
b=r;
c=r%ob1.b;
d=ob1.a*c;
c=r/ob2.b;
e=ob2.a*c;
a=e+d;
}

void fraction::sub(fraction ob1,fraction ob2)
{
r=lcm(ob1.b,ob2.b);
b=r;
c=r/ob1.b;
d=ob1.a*c;
c=r/ob2.b;
e=ob2.a*c;
a=d-e;
}

void fraction::mul(fraction ob1,fraction ob2)
{
a=ob1.a*ob2.a;
b=ob1.b*ob2.b;
}

void fraction::div(fraction ob1,fraction ob2)
{
a=ob1.a*ob2.a;
b=ob1.b*ob2.b;
}

int main()
{
fraction ob1(1,9);
fraction ob2(5,12);
fraction ob3,ob4,ob5,ob6,ob7;
ob3.add(ob1,ob2);
ob4.sub(ob1,ob2);
ob1.putdata();
ob2.putdata();
ob3.putdata();
ob4.putdata();
ob5.mul(ob4,ob3);
ob5.putdata();
ob6.div(ob5,ob3);
ob6.putdata();
cout<<"\n"<<ob7.gcd(ob1,ob2);
}
