#include <iostream>
using namespace std;

class Point {
public:
  int x;

  Point() 
  {
    this->x = x;
  }

  void print() 
  {
    cout <<"value of x:"<<x<< endl;
  }
};

int main() 
{
  Point p;
  Point* ptr = &p;
  ptr->x = 30;
  ptr->print();

}
