#include"Number.h"
#include"RealNumber.h"
#include<iostream>

using namespace std;

RealNumber::RealNumber(double a)
{
Rn=a;
}

RealNumber RealNumber::add(const RealNumber& other)
{
RealNumber B(Rn+other.Rn);
return B;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
RealNumber B(Rn*other.Rn);
return B;
}

void RealNumber::print()
{
cout<<"RealNumber : "<<Rn<<endl;
}



