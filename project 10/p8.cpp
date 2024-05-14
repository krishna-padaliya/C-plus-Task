//Wap program to print Multiplication table of a number using classes
#include<iostream>
using namespace std;
class table
{
	private:
		int num;
     public:
	    void getdata()
		{
			cout<<"Enter number:";
			cin>>num;
		}	
		void display()
		{
			for (int i=1; i<=10; i++)
            {
               cout<<num<<" * "<<i<<" = "<<num*i<<endl;
            }
		}
};
int main()
{
	table t1;
	t1.getdata();
	t1.display();
}