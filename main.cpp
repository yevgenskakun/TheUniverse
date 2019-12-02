#include "Park.h"
int main()
{
  Park A;
  A.Input();
  A.Print();
  A.setPrice(35);
  A.Print();
  A.setArea(10);
  A.Print();
  A.setMax(3000);
  A.Print();
  A.setLength(2000);
  A.Print();
  A.setQuantity(600);
  A.Print();
  Park B;
  B.Input();
  B.Print();
  B.setPrice(50);
  B.Print();
  B.setArea(11);
  B.Print();
  B.setMax(3300);
  B.Print();
  B.setLength(1800);
  B.Print();
  B.setQuantity(550);
  B.Print();
  Park C;
  C.Input();
  C.Print();
  C.setPrice(70);
  C.Print();
  C.setArea(15);
  C.Print();
  C.setMax(4500);
  C.Print();
  C.setLength(2700);
  C.Print();
    C.setQuantity(700);
  C.Print();
  system("pause");
  return 0;
}
