//defining the constructor within the class and print student details like name,roll_no,course_name,fees

#include<iostream>
using namespace std;
class stud{
    private:
	   int roll_no,fees;
	   char name[30],course_name[50];
	public:
	    stud()
		{
			cout<<"Enter Roll_no:";
			cin>>roll_no;
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Course:";
			cin>>course_name;
			cout<<"Enter Fees:";
			cin>>fees;
			cout<<endl;
		} 
		void showdata()
		{
			cout<<"Roll_no:"<<roll_no<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Course:"<<course_name<<endl;
			cout<<"Fees:"<<fees<<endl;
		} 
};
int main()
{
	stud s1;
	s1.showdata();
	
}