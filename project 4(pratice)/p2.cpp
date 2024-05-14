//multileve
#include<iostream>
using namespace std;
class base{
	protected:
		int a;
	public:
		void getdata1()
		{
			cout<<"Enter value of a:";
			cin>>a;
		}
};
class derived:public base{
	protected:
		int b;
	public:
		void getdata2()
		{
			cout<<"Enter value of b:";
			cin>>b;
		}
};
class subderived:public derived{
	protected:
		int c;
	public:
		void getdata3()
		{
			cout<<"Enter value of c:";
			cin>>c;
		}
};
class sum:public subderived{
	public:
		void getdata4()
		{
			cout<<"Sum of the number:"<<a+b+c;
		}
};
int main()
{
	sum s1;
	s1.getdata1();
	s1.getdata2();
	s1.getdata3();
	s1.getdata4();
}