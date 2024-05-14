//WAP TO PERFORM NESTED FUNCTION
#include<iostream>
using namespace std;
class base{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"Government employees under the bonus act 1965"<<endl;
			cout<<"Enter your salary:";
			cin>>a;
		}
        int salary()
		{
				if(20000>a)
				{
					cout<<"You Are not eligibility for diwali bonus";
				}
				else
				{
					cout<<"You Are eligibility for diwali bonus";
				}
		}
		void setdata()
		{
			cout<<salary();
		}
};
int main()
{
	base b1;
	b1.getdata();
	b1.setdata();
}