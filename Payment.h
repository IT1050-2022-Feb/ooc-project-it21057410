#include <iostream>
#include "Discount.h"
#include "Products.h"
using namespace std;

class Payment{
protected:
float total;
int TID;
private:
Products *Pr[SIZE];
Discount *Dis;
public:
Payment(){
  total = 0;
  TID = 0;
}
Payment(int tid, float TOTAL, Discount *pdis){
  TID = tid;
  total = TOTAL;
  Dis[SIZE] = pdis[SIZE];
}
float getTotal(){
  return total;
}
void calcSubTotal();
};

class Cash:public Payment{
private:
float cashTendered;
public:
Cash(){
  cashTendered = 0;
}
Cash(int tid, float cashtendered):Payment(tid){
  TID = tid;
  cashTendered = cashtendered;  
}
};

class Credit:public Payment{
private:
int cashNo;
string holderName;
public:
Credit(){
  cashNo = 0;
  holderName = "";
}
Credit(int tid,int cashno, string holdername):Payment(tid){
  TID = tid;
  cashNo = cashno;
  holderName = holdername;
};
void validateDetails();
void DisplayDetails();
};