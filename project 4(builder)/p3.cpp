//define the constructor and perform all arithmetic task

#include<iostream>
using namespace std;
class task{
	private:
		int a,b;
	public:
		task();
		void display();
};
    task::task()
    {
    	cout<<"Enter Value of A:";
    	cin>>a;
    	cout<<"Enter Value of B:";
    	cin>>b;
    	cout<<endl;
	}
	void task::display()
	{
		cout<<"Addition:"<<a+b<<endl;
		cout<<"Subtraction:"<<a-b<<endl;
		cout<<"Multiplication:"<<a*b<<endl;
		cout<<"Division:"<<a/b<<endl;
		cout<<"Modual:"<<a%b;
	}
int main()
{
	task t1;
	t1.display();
}