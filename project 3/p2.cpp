//wap to print inner variable outside the scope with scope resolution operator
#include<iostream>
using namespace std;
class scope
{
	private:
		int num;
	public:
		void getnum();
		void setnum();
};
void scope::getnum()
{
	cout<<"Enter Your Number:";
	cin>>num;
}
void scope::setnum()
{
	if(num%2==0)
	{
		cout<<"This is even number";
	}
	else
	{
		cout<<"This is odd number";
	}
}
int main()
{
	scope s1;
	s1.getnum();
	s1.setnum();
}