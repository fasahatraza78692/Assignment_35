#include<iostream>
using namespace std;
template<class T>
T sum(T ar[], int size)
 {
 	T temp=0;
 	 for(int i=0;i<size;i++)
 	     temp=temp+ar[i];
 	return temp;
 }
int main()
{
	double arr[]={5.2,4.9,2.1,3.3,6.7,8.4,7.1};
	cout<<"Sum of the array = "<<sum(arr,7);
	return 0;
}
