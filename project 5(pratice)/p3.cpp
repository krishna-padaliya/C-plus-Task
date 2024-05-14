//hierarchical
#include<iostream>
using namespace std;
class parent{
	public:
		void display()
		{
			cout<<"this is parent class."<<endl;
		}
};
class child1:public parent{
    public:
	void display1()
	{
		cout<<"this is child1 class."<<endl;
	}	
};
class child2:public parent{
    public:
	void display2()
	{
		cout<<"this is child2 class."<<endl;
	}	
};
class subchild1:public child1{
	 public:
	void display3()
	{
		cout<<"this is child1 subclass1."<<endl;
	}
};
class subchild2:public child2{
	 public:
	void display4()
	{
		cout<<"this is child1 subclass2."<<endl;
	}
};
int main()
{
	subchild1 s1;
	subchild2 s2;
	s2.display();
	s1.display1();
	s2.display2();
	s1.display3();
	s2.display4();
}