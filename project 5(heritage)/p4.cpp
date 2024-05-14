#include <iostream>
using namespace std;
class Base {
protected:
  int a,b;

public:
  void getdata() {
    cout<<"Enter value of a:";
	cin>>a;
	 cout<<"Enter value of b:";
	 cin>>b;   
  }


  void display() {
  	cout<<endl;
    cout<<"swap value of a:"<<a<<endl;
    cout<<"swap value of b:"<<b<<endl;
  }
};

class Derived : public Base {
public:
  void swap() {
    int c=a;
    a = b;
    b = c;
  }
};

int main() {
  Derived d;
  d.getdata();
//  d.getdata1();
  d.swap();
  d.display();

}
