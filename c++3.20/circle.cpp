#include <iostream>
using namespace std;
class Circle
{
public:
Circle( ):pi(3.14159)
{cout<<"���캯��������"<<endl;}
void setR(double r)
{ radius=r;}
double area( )
{return pi*radius*radius;}
private:
double radius;
const double pi;
};
int main()
{
Circle a;
double x;
cout<<"please input �뾶��";
cin>>x;
a.setR(x);
cout<<a.area()<<endl;
return 0;
}