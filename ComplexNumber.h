#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include"Number.h"
class ComplexNumber :public Number
{
public:
ComplexNumber(double=0.0,double=0.0);
virtual ComplexNumber add(const ComplexNumber& other);
virtual ComplexNumber mul(const ComplexNumber& other);
virtual void print();

private:
double Cn1;
double Cn2;
};
#endif
