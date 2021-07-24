#include<iostream>
using namespace std;
class complex
{
float real,imag;
public:complex(){}
complex(float a)
{
real=imag=a;
}
complex(float a,float b)
{
real=a;
imag=b;
}
complex operator +(complex);
complex operator -(complex);
complex operator *(complex);
void putdata(void);
};

void complex::putdata(void)
{
cout<<"\nreal=\t"<<real;
cout<<"\nimaginary=\t"<<imag;
}

complex complex::operator +(complex x)
{
complex temp;
temp.real=real+x.real;
temp.imag=imag+x.imag;
return(temp);
}

complex complex::operator -(complex x)
{
complex temp;
temp.real=real-x.real;
temp.imag=imag-x.imag;
return(temp);
}

complex complex::operator *(complex x)
{
complex temp;
temp.real=(real*x.real)-(imag*x.imag);
temp.imag=(real*x.imag)+(x.real*imag);
return(temp);
}

int main()
{
complex ob1(7.5),ob2(2.5,3.1),ob3,ob4,ob5;
ob1.putdata();
ob2.putdata();
ob3=ob1+ob2;
ob3.putdata();
ob4=ob1-ob2;
ob4.putdata();
ob5=ob1*ob2;
ob5.putdata();
}

