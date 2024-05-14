//wap to multiply of int as well as float value using function overloading
#include <iostream>
using namespace std;
class overload
{
	public:
    	void mul(int a,int b)
    	{        
    		cout<<"Enter value of a:";
    		cin>>a;
    		cout<<"Enter value of b:";
    		cin>>b;
    		cout<<endl;
    		cout<<"Multiplication is:"<<a*b<<endl;
    		cout<<endl;
		}
		void mul(double a,double b)
    	{
    		cout<<"Enter value of a:";
    		cin>>a;
    		cout<<"Enter value of b:";
    		cin>>b;
    		cout<<endl;
    		cout<<"Multiplication is:"<<a*b<<endl;
    		cout<<endl;
		}
};
int main() 
{
	overload o1;
	o1.mul(1,2);
	o1.mul(1,2);
}
