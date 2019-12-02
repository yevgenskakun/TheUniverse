#pragma once
#include "iostream"
#include "string"
using namespace std;
class Park
{
private:
  string Address;
  int Lenght;
  int Price;

protected:
  int Area;
  int Quantity;
public:
  string City;
  string getCity();
  int Max;
  int getMax();
  string getAddress();
  int getLength();
  int getPrice();
  int getArea();
  int getQuantity();
  void setCity(string C);
  void setArea(int A);
  void setMax(int M);
  void setLength(int L);
  void setAddress(string A);
  void setPrice(int P);
  void setQuantity(int Q);
  void Input();
  void Print();
};
