#include <iostream>
using namespace std;

class base {
   public:
    virtual void print() {
        cout << "THIS IS BASE CLASS" << endl;
    }
};

class derived : public base {
   public:
    void print() {
        cout << "THIS IS DERIVED CLASS" << endl;
    }
};

int main() {
    derived d1;
    d1.print();
}