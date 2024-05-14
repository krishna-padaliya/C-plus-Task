//WAP TO PERFORM ADDITION OF TWO NUMBERS USING CLASS, WITH TWO FUNCTIONS
//FIRST FUNCTION- GET VALUES FROM USER
//SECOND- PERFORM ADDITION

#include<iostream>
using namespace std;
class add
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
		void addition()
		{
			cout<<"Two Values Addition Is:"<<a+b<<endl;
		}
};
int main()
{
	add a1;
	a1.getdata();
	a1.addition();
}