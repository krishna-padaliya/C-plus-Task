#include<iostream>
using namespace std;
void inline swap(int &a,int &b)
{
	int c=a;
	    a=b;
	    b=c;
}
int main()
{
	int a,b;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<endl;
	
	swap(a,b);
	cout<<"Swaping values as below:-"<<endl;
	cout<<"Value of A:"<<a<<endl;
	cout<<"Value of B:"<<b<<endl;
}