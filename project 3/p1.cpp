//wap to get 3 emp data using object-array
#include<iostream>
using namespace std;
class emp{
	private:
	    int id;
	    char name[30];
	    char dep[50];
	
	public:
		void getemp()
		{
			cout<<"Enter emp_id:";
			cin>>id;
			cout<<"Enter emp_name:";
			cin>>name;
			cout<<"Enter emp_department:";
			cin>>dep;
		}
		void setemp()
		{
			cout<<"emp_id:"<<id<<endl;
			cout<<"emp_name:"<<name<<endl;
			cout<<"emp_department:"<<dep<<endl;
		}
};
int main()
{
	emp e1[5];
    for(int i=1; i<=3; i++)
    {
    	e1[i].getemp();
    	cout<<endl;
	}
	for(int i=1; i<=3; i++)
    {
    	e1[i].setemp();
    	cout<<endl;
	}
}