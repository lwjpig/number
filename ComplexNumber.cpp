#include"ComplexNumber.h"
#include<iostream>

using namespace std;

ComplexNumber::ComplexNumber(double a,double b)
{
Cn1=a;
Cn2=b;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
ComplexNumber C(Cn1+other.Cn1,Cn2+other.Cn2);
return C;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
ComplexNumber C(Cn1*other.Cn1-Cn2*other.Cn2,Cn1*other.Cn2+Cn2*other.Cn1);
return C;
}

void ComplexNumber::print()
{
cout<<"ComplexNumber: "<<Cn1<<"+"<<Cn2<<endl;
}

