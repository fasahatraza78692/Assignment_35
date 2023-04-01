#include<iostream>
using namespace std;
template <class T>
T largest(T a, T b, T c)
 {
    if(a>b)
     {
       if(a>c)
        return a;
       return c;
     }
    else
     {
       if(b>c)
         return b;
        return c;
     }
 }
int main()
{
	cout<<"Largest = "<<largest(8,19,13);
	return 0;
}
