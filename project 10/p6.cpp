//Wap program to check weather a number is Odd or Even using class 
#include<iostream>
using namespace std;
class check
{
	private:
		int num;
	public:
		void getdata()
		{
			cout<<"Enter Number:";
			cin>>num;
		}
		void display()
		{
			if(num%=2)
			{
				cout<<"It is even number";
			}
			else
			{
				cout<<"It is odd number";
			}
		}
};
int main()
{
	check c1;
	c1.getdata();
	c1.display();
}