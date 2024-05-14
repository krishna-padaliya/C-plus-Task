// Wap to demonstrate operator overloading using binary method
#include <iostream>  
using namespace std;  
class add  
{
    int num;  
    public:  
        void input()  
        {  
            num = 100;
        }  
        add operator + (add &ob)  
        {  
            add A;  
            A.num = num + ob.num;  
            return (A);  
        }  
        void print()  
        {  
            cout << num;  
        }         
};  
int main ()  
{  
    add x1, y1, res;       
    x1.input();  
    y1.input();     
    res = x1 + y1;  
    cout << " Addition : " ;  
    res.print();
} 