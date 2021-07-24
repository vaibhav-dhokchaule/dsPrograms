#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class book
{
char name[10];
int st;
public:
void getdata(void)
{
cout<<"\n Enter book name";
cin>>name;
cout<<"\n Enter book  std";
cin>>st;
}
void putdata(void)
{
cout<<"\n book name"<<"\t"<<name;
cout<<"\n book  std"<<"\t"<<st;
}
int stdi()
{
return st;
}
};

int main()
{
int i,n;
book ob[10],ob1;
fstream A;
A.open("cities.txt",ios::out|ios::binary);
cout<<"\n How many books";
cin>>n;
for(i=0;i<n;i++)
{
ob[i].getdata();
A.write((char*)&ob[i],sizeof(ob[i]));
}
A.close();
A.open("cities.txt",ios::in|ios::binary);
cout<<"\n The info of  books\n";
for(i=0;i<n;i++)
{
A.read((char*)&ob[i],sizeof(ob[i]));
ob[i].putdata();
}
A.close();
A.open("cities.txt",ios::in|ios::binary);
cout<<"\nEnter std code to search";
int x,y;
cin>>x;
for(i=0;i<n;i++)
{
if(x==ob[i].stdi())
{
A.read((char*)&ob1,sizeof(ob1));
ob[i].putdata();
}
else
continue;
}
A.close();
}




