#include<iostream>
using namespace std;
template <class T>
T Largest(T x, T y)
 {
 	if(x>y)
 	 return x;
 	return y;
 }
int main()
{
	cout<<"Largest = "<<Largest(8,19);
	return 0;
}
