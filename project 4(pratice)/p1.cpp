//single
#include<iostream>
using namespace std;
class base{
	public:
		void display()
		{
			cout<<"This is Baseclass."<<endl;
		}
};
class derived:public base{
	public:
		void display1()
		{
			cout<<"This is Derivedclass."<<endl;
		}
};
int main()
{
	derived d1;
	d1.display();
	d1.display1();
}