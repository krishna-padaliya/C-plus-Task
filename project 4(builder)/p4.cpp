//define the copy constructor
#include<iostream>
using namespace std;
class base{
	private:
		int num1;
	public:
		base(int number1)
		{
			num1=number1;
		}
		base(const base &n)
		{
			num1=n.num1;
		}
		void display()
		{
			cout<<"Number:"<<num1<<endl;
		}
};
int main()
{
	base b1(100);
	base b2=b1;
	b1.display();
	b2.display();
}