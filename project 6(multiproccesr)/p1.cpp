//Wap to perform addition of int value as well as float value using function overloading
#include <iostream>
using namespace std;
class overload
{
	public:
    	void add(int a,int b)
    	{        
    		cout<<"Enter value of a:";
    		cin>>a;
    		cout<<"Enter value of b:";
    		cin>>b;
    		cout<<endl;
    		cout<<"Addition is:"<<a+b<<endl;
    		cout<<endl;
		}
		void add(double a,double b)
    	{
    		cout<<"Enter value of a:";
    		cin>>a;
    		cout<<"Enter value of b:";
    		cin>>b;
    		cout<<endl;
    		cout<<"Addition is:"<<a+b<<endl;
    		cout<<endl;
		}
};
int main() 
{
	overload o1;
	o1.add(1,2);
	o1.add(1,2);
}
