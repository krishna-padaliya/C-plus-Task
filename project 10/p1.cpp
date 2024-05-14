//Wap program to find Greatest among five numbers using Nested if else  Class 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	
	cout<<"Enter value of A:";
	cin>>a;
	cout<<"Enter value of B:";
	cin>>b;
	cout<<"Enter value of C:";
	cin>>c;
	cout<<"Enter value of D:";
	cin>>d;
	cout<<"Enter value of E:";
	cin>>e;
	
	if(a>b && a>c && a>d && a>e)
	{
        if(b>c && b>d && b>e)
		{
			cout<<"B is Bigger!!";
		}
		else
		{
			cout<<"A is Bigger!!";
		}
    }
		else if(c>d && c>e)
		{
			cout<<"C is Bigger!!";
		}
		else if(d>e)
		{
			cout<<"D is Bigger!";
		}
    
	else
	{
		cout<<"E is Bigger!!";
	}
}