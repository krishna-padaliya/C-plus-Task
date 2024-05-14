//Wap program to calculate Factorial of a number using class 
#include<iostream>
using namespace std;
class factorial
{
	private:
		int fact=1,num;
	public:
		void getdata()
		{
			cout<<"Enter your factorial number:";
			cin>>num;
			for(int i=1; i<=num; i++)
			{
			     fact=fact*i;
			}
		}
		void display()
		{
			cout<<"Factorial is:"<<fact;
		}
};
int main()
{
	factorial f1;
	f1.getdata();
	f1.display();
}