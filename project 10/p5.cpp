//Wap program to swap two numbers using class and object
#include<iostream>
using namespace std;
class base
{
    int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter vlaue of a:";
			cin>>a;
			cout<<"Enter vlaue of b:";
			cin>>b;
		}
		void display()
		{
			c=a;
			a=b;
			b=c;
			cout<<"After swaping a:"<<a<<endl;
            cout<<"After swaping b:"<<b<<endl;
  		}
};
int main()
{
	base s1;
	s1.getdata();
	s1.display();
}