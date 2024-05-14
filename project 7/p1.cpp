#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{    
   int num,power;  

    cout<<"Enter number:";
	cin>>num;
	cout<<"Enetr power:";
	cin>>power; 
	
   int result = pow(num,power);          
   std::cout<<"the power of a number: " <<result<< std::endl;  
   
}  