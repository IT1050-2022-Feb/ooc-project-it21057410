#include <iostream>
#include "Payment.h"

class Discount{
private:
int promoCode;
int rate;
Payment *payment[SIZE];
public:
Discount(){
  promoCode = 0;
  rate = 0;
}
Discount(int dpromoCode, int drate){
  promoCode = dpromoCode;
  rate = drate;
}
void calcDiscount(payment *p);
void displayDiscount();
};