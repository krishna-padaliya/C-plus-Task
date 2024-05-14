//WAP TO FIND LARGEST NUMBER USING SIMPLE CLASS EXAMPLE
#include<iostream>
using namespace std;
class simple
{
	private:
	   int a,b;
	public:
		void getdata()
		{
		   cout<<"Enter value of a:";
	       cin>>a;
	       cout<<"Enter value of b:";
	       cin>>b;
		}
		void display()
		{
			if(a>=b)
			{
				cout<<"A is Largest Number";
			}
			else
			{
				cout<<"B is Largest Number";
			}
		}
};
int main()
{
	simple s1;
	s1.getdata();
	s1.display();
}