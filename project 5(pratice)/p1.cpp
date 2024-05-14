//multiple
#include<iostream>
using namespace std;
class base1{
	public:
		void display1()
		{
			cout<<"It is frist base class."<<endl;
		}
};
class base2
{
	public:
		void display2()
		{
			cout<<"It is second base class."<<endl;
		}
};
class derived:public base1,public base2
{
	public:
		void display3()
		{
			cout<<"It is derived class"<<endl;
		}
};
int main()
{
	derived d1;
	d1.display1();
	d1.display2();
	d1.display3();
}