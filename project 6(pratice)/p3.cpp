//Wap to demonstrate operator overloading using unary method 
#include<iostream>
using namespace std;
class uoverload
{
    int num;
     public:
        void in()
        {
                cout<<"Enter Number:";
                cin>>num;
        }
        void operator++(int) //Overload Unary Increment
        {
                num++;
        }
        void operator--(int) //Overload Unary Decrement
        {
                num--;
        }
        
        void out()
        {
            cout<<"Number is:"<<num;
               
        }
};
int main()
{
        uoverload ob;
        ob.in();
        ob++;
        cout<<"\nAfter Increment ";
        ob.out();
        ob--;
        cout<<"\nAfter Decrement ";
        ob.out();
}