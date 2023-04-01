#include<iostream>
using namespace std;
class shape
{
	public:
		shape()
		 { cout<<"Non-Template class cunstructor called"<<endl; }
};
template<class T>
class circle : public shape
{
	T radius;
	double area;
     public:
	  circle(T r)
	   {
	   	 radius=r;
	   }
	 void Area()
	  {
	  	area=3.14*radius*radius;
	  	cout<<"Area of circle = "<<area<<endl;
	  }
};
int main()
{
	circle<int> c1(2);
	c1.Area();
	circle<double> c2(1.6);
	c2.Area();
	return 0;
}
