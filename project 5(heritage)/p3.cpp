#include<iostream>
using namespace std;
class base{
	public:
		void display()
		{
			cout<<"Show ambiguity error"<<endl;
		}
};
class derived{
	public:
		void display()
		{
			cout<<"Show ambiguity error"<<endl;
		}
};
class sub:public base,public derived{
	public:
		void display()
		{
			cout<<"Show ambiguity error"<<endl;
		}
};
int main()
{
	sub s1;
	s1.display();
//	s1.display();
//	s1.display();
}