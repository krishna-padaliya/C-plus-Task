//WAP TO PRINT VALUE OF VARIABLE USING REFERENCE VARIABLE
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b;
}