#include<iostream>
using namespace std;
class sum{
	int a,b;
	public:
		void getsum()
		{
			cout<<"--------Addition--------"<<endl;
			cout<<endl;
			cout<<"Enter value of A:";
			cin>>a;
			cout<<"Enter value of B:";
			cin>>b;
		}
		void showsum()
		{
			cout<<endl;
			cout<<"Addition is:"<<a+b;
			cout<<endl;
			cout<<endl;
		}
};
class sub:public sum{
	int c,d;
	public:
		void getsub()
		{
			cout<<"--------Subtraction--------"<<endl;
			cout<<endl;
			cout<<"Enter value of C:";
			cin>>c;
			cout<<"Enter value of D:";
			cin>>d;
		}
		void showsub()
		{
			cout<<endl;
			cout<<"Subtraction is:"<<c-d;
			cout<<endl;
			cout<<endl;
		}
};
class mul:public sub{
	int e,f;
	public:
		void getmul()
		{
			cout<<"--------Multiplication--------"<<endl;
			cout<<endl;
			cout<<"Enter value of E:";
			cin>>e;
			cout<<"Enter value of F:";
			cin>>f;
		}
		void showmul()
		{
			cout<<endl;
			cout<<"Multiplication is:"<<e*f;
			cout<<endl;
			cout<<endl;
		}
};
class dev:public mul{
	int g,h;
	public:
		void getdev()
		{
			cout<<"--------Devision--------"<<endl;
			cout<<endl;
			cout<<"Enter value of G:";
			cin>>g;
			cout<<"Enter value of H:";
			cin>>h;
		}
		void showdev()
		{
			cout<<endl;
			cout<<"Devision is:"<<g/h;
			cout<<endl;
			cout<<endl;
		}
};
class mod:public dev{
	int i,j;
	public:
		void getmod()
		{
			cout<<"--------Modual--------"<<endl;
			cout<<endl;
			cout<<"Enter value of I:";
			cin>>i;
			cout<<"Enter value of J:";
			cin>>j;
		}
		void showmod()
		{
			cout<<endl;
			cout<<"Modual is:"<<i%j;
			cout<<endl;
			cout<<endl;
		}
};
int main()
{
	mod m1;
	m1.getsum();
	m1.showsum();
	m1.getsub();
	m1.showsub();
	m1.getmul();
	m1.showmul();
	m1.getdev();
	m1.showdev();
	m1.getmod();
	m1.showmod();
}


