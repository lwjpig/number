#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include"RealNumber.h"

class IntegerNumber:public RealNumber
{
public:
IntegerNumber(int In);
virtual void print();
virtual IntegerNumber add(const IntegerNumber& other);
virtual IntegerNumber mul(const IntegerNumber& other);

private:
int In;
};

#endif
