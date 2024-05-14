//Wap program to check leap year using classes
#include <iostream>
using namespace std;
class base
{
	int year;
	public:
	void getdata()
	{
	    cout<<"Enter Year:";
        cin>>year;
	}
    void display()
    {
    	if(year % 4 == 0  && year % 100 != 0)
        cout << year << " is a Leap Year";

        else
        cout << year << " is not a Leap Year";
	}
};
int main()
{
    base b1;
    b1.getdata();
    b1.display();
}