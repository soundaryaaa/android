#include<iostream>
using namespace std;
class fun
{
public:
void add(int,int);
void add(float,float);
};
void fun::add(int a,int b)
{
int c;
c=a+b;
cout<<"the sum of two numbers is:"<<c<<endl;
}
void fun::add(float x,float y)
{
float z;
z=x+y;
cout<<"the addition of two float numbers is:"<<z<<endl;
}
int main()
{
int n,m;
float s,t;
cout<<"enter the two integers:"<<endl;
cin>>n;
cin>>m;
cout<<"enter the two float numbers:"<<endl;
cin>>s;
cin>>t;
fun k;
k.add(n,m);
k.add(s,t);
return 0;
} 
