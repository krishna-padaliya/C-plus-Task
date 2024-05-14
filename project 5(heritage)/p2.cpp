#include <iostream>
using namespace std;
class base {
protected:
  int height;
  int width;

public:
  void getdata() {
    cout<<"Enter value of height:";
	cin>>height;
	cout<<"Enter value of width:";
	cin>>width;
  }
};

class derived : public base {
public:
  int display() {
    return height * width;
  }
};

int main() {
  derived d;
  d.getdata();
  d.display();
  cout << "The area of the rectangle is:" << d.display() << endl;
}
