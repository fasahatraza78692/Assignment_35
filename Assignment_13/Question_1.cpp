#include<iostream>
using namespace std;
template<class T>
T add(T x, T y)
 {
 	return x+y;
 }
int main()
{
	cout<<"Addition = "<<add(2.1,6.7);
	return 0;
}
