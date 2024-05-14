//wap to perform addition but define that function outside the class
#include<iostream>
using namespace std;
class add
{
	private:
		int a,b,c;
	public:
		void getadd();
		void addition();
};
void add::getadd()
{
	cout<<"Enter value for A:";
	cin>>a;
	cout<<"Enter value for B:";
	cin>>b;
	cout<<"Enter value for C:";
	cin>>c;
}
void add::addition()
{
	cout<<"Addition is:"<<a+b+c;
}
int main()
{
	add a1;
	a1.getadd();
	a1.addition();
}