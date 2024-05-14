//hybrid
#include<iostream>
using namespace std;
class base1{
	public:
		void display1()
		{
			cout<<"This is display1"<<endl;
		}
};
class base2:public base1
{
	public:
		void display2()
		{
			cout<<"This is display2"<<endl;
		}
};
class base3
{
	public:
		void display3()
		{
			cout<<"This is display3"<<endl;
		}
};
class base4:public base3,public base2
{
	public:
		void display4()
		{
			cout<<"This is display4"<<endl;
		}
};
int main()
{
	base4 b4;
	b4.display1();
	b4.display2();
	b4.display3();
	b4.display4();	
}