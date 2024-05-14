//WAP TO USE THIS KEYWORD
#include<iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		void getdata(int a,int b)
		{
			cout<<"Enter value of a:";
			cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
			this->a=a;
			this->b=b;
		}
		void sum()
		{
			cout<<"Sum of the givien number:"<<a+b<<endl;
		}
};
int main()
{
	base b1;
	b1.getdata(100,200);
	b1.sum();
}