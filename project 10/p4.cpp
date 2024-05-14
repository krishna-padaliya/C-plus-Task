//Wap program to check weather a character is vowel or consonant using class
#include<iostream>
using namespace std;
class check
{
	private:
		char ch;
	public:
		void getdata()
		{
			cout<<"Enter a charcter:";
			cin>>ch;
		}
		void display()
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				cout<<"It is a vowel";
			}
			else
			{
				cout<<"It is a consonant";
			}
		}
};
int main()
{
	check c1;
	c1.getdata();
	c1.display();
}