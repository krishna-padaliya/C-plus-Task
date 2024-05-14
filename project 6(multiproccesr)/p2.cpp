//Wap to addition of three values pass through object, using binary operator overloading
#include<iostream>
using namespace std;
class base{
	private:
		int a,b,c;
	public:
		base(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		void sum()
		{
			cout<<"Addition is: "<<a+b+c<<endl;
		}
		base operator + (base b4){
			base temp(0,0,0);
			temp.a=a+b4.a;
			temp.b=b+b4.b;
			temp.c=c+b4.c;
	
			return temp;
			
		}
			
};
int main()
{
	base b1(10,20,30),b2(40,50,60),b3(70,80,90),b4(0,0,0);
	b4=b1+b2+b3;
	b4.sum();
}