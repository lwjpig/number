#ifndef REALNUMBER_H
#define REALNUMBER_H

#include"Number.h"

class RealNumber : public Number
{
public:
RealNumber(double Rn=0.0);
virtual void print();
virtual RealNumber add(const RealNumber& other);
virtual RealNumber mul(const RealNumber& other);

protected:
double Rn;
};

#endif
