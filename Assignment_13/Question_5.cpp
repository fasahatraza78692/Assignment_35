#include<iostream>
using namespace std;
template<class T>
T add(T x, T y)
 {
 	return x+y;
 }
int main()
{
	cout<<"Addition = "<<add(2,17);
	return 0;
}
