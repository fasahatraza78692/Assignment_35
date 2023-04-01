#include<iostream>
using namespace std;
template<class T>
class Stack
{
   int top;
   T arr[50];
     public:
      Stack()
       {
       	 top=-1;
	   }
	  void push(T a)
	   {
	   	 if(top==49)
	   	  cout<<"stack overflow"<<endl;
	   	 else
			{
	   	 	    top++;
	   	 	    arr[top]=a;
			}
	   }
	   bool isEmpty()
	    {
	    	if(top==-1)
	    	  return true;
	        return false;
		}
	  void pop()
	   {
	   	 if(top==-1)
	   	   	cout<<"stack empty";
		 else
		    top--;
	   }
	  T peak()
	   {
	   	 if(top==-1)
	   	   return -1;
	   	 return arr[top];
	   }
};
int main()
{
	Stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    s1.push('e');
    s1.pop();
    while(!s1.isEmpty())
     {
     	cout<<s1.peak()<<" ";
     	s1.pop();
	 }
	return 0;
}
