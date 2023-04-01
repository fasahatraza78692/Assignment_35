#include<iostream> 
using namespace std;
template <class T>
void Swap(T &x, T &y)
 {
 	T temp=x;
 	x=y;
 	y=temp;
 }
 int main()
 {
 	int a=12,b=17;
 	cout<<"A = "<<a<<" B = "<<b;
 	cout<<endl;
 	Swap(a,b);
 	cout<<"A = "<<a<<" B = "<<b;
 	return 0;
 }
