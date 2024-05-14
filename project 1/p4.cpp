//WAP TO PERFORM ALL ARITHMATIC TASK USING FUNCTION PROTOTYPE
#include <iostream>
using namespace std;
// function prototype
int add(int, int);
int sub(int,int);
int multi(int,int);
int dev(float,float);
int mod(int,int);
int main() 
{
	int a,b,c,d,e,f,g;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
    c=add(a,b);
    d=sub(a,b);
    e=multi(a,b);
    d=dev(a,b);
    g=mod(a,b);
}
int add(int a, int b) 
{
    cout<<"Addition:"<<(a+b)<<endl;
}
int sub(int a, int b) 
{
    cout<<"Subtraction:"<<(a-b)<<endl;
}
int multi(int a, int b) 
{
    cout<<"Multipalication:"<<(a*b)<<endl;
}
int dev(float a, float b) 
{
    cout<<"Devision:"<<(a/b)<<endl;
}
int mod(int a, int b) 
{
    cout<<"Modual:"<<(a%b)<<endl;
}