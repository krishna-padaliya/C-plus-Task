//WAP TO GET ITEM-CODE AND PRICE OF TWO ITEMS FROM USER AND PRINT IT USING POINTER OBJECT
#include <iostream>
using namespace std;

class Item 
{
public:
  int itemCode;
  float price;
};

int main() 
{
  Item* p1 = new Item();
  Item* p2 = new Item();

  
  cout << "Enter the item-code the first item: ";
  cin >> p1->itemCode;
  cout << "Enter the price of the first item:";
  cin >> p1->price;

  cout << endl;

  cout << "Enter the item-code the first item: ";
  cin >> p2->itemCode;
  cout << "Enter the price of the first item:";
  cin >> p2->price;

  cout << endl;

  cout << "Item-code of the first item: " << p1->itemCode << endl;
  cout << "Price of the first item: " << p1->price << endl;
  
  cout << endl;

  cout << "Item-code of the second item: " << p2->itemCode << endl;
  cout << "Price of the second item: " << p2->price << endl;

  
}
