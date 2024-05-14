//Wap program to convert character uppercase into lowercase or lowercase into uppercase using class
#include<iostream>
using namespace std;
class transform
{
	private:
		char nm;
	public:
		void getdata()
		{
			cout<<"Enter Your Charcater:";
			cin>>nm;
		}
		void upper()
		{
			cout<<"Uppercase:"<<(char)toupper(nm)<<endl;
		}
		void lower()
		{
			cout<<"Lowercase:"<<(char)tolower(nm)<<endl;
		}
};
int main()
{
	transform t1;
	t1.getdata();
	t1.upper();
	t1.lower();
}