#include "Park.h"

string Park::getAddress()
{
  return Address;
}
string Park::getCity()
{
  return City;
}
int Park::getArea()
{
  return Area;
}
int Park::getPrice()
{
  return Price;
}
int Park::getQuantity()
{
  return Quantity;
}
int Park::getMax()
{
  return Max;
}
int Park::getLength()
{
    return Lenght;
}
void Park::setAddress(string A)
{
  Address = A;
}
void Park::setCity(string C)
{
  City = C;
}
void Park::setQuantity(int Q)
{
  Quantity = Q;
}
void Park::setPrice(int P)
{
  Price = P;
}
void Park::setArea(int A)
{
  Area = A;
}
void Park::setMax(int M)
{
  Max = M;
}
void Park::setLength(int L)
{
    Lenght = L;
}
void Park::Input()
{
  cout << "Address =" << '\n';
  cin >> Address;
  cout << "Price =" << '\n';
  cin >> Price;
  cout << "Area =" << '\n';
  cin >> Area;
  cout << "Max =" << '\n';
  cin >> Max;
  cout << "Length =" << '\n';
    cin >> Lenght;
  cout << "City =" << '\n';
  cin >> City;
  cout << "Quantity =" << '\n';
  cin >> Quantity;
}
void Park::Print()
{
  cout << "The address - " << Address << '\n';
  cout << "The ticket costs - " << Price << '\n';
  cout << "The area of the park - " << Area << '\n';
  cout << "The max number of visitors - " << Max << '\n';
    cout << "The length of bike lanes  - " << Lenght << '\n';
  cout << "The park located in - " << City << '\n';
  cout << "The quantity of benches - " << Quantity << '\n';
}
