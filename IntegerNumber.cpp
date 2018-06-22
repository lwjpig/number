#include"RealNumber.h"
#include"IntegerNumber.h"
#include<iostream>

using namespace std;

IntegerNumber::IntegerNumber(int b)
{
In=b;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
IntegerNumber A(In+other.In);
return A;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
IntegerNumber A(In*other.In);
return A;
}

void IntegerNumber::print()
{

cout<<"IntegerNumber : "<<In<<endl;
}

