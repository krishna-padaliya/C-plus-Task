//WAP TO PERFROM GETTER AND SETTER
#include<iostream>
using namespace std;
class base{
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
		void setdata()
		{
			cout<<"Value of a:"<<a<<endl;
			cout<<"Value of b:"<<b<<endl;
		}
};
int main()
{
	base b1;
	b1.getdata();
	b1.setdata();
}