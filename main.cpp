#include"Number.h"
#include"RealNumber.h"
#include"IntegerNumber.h"
#include"ComplexNumber.h"
#include<iostream>

using namespace std;

int main()
{


RealNumber B1(12.45),B2(15.99),B3(0.0);
B3=B1.mul(B2);
B1=B1.add(B2);
IntegerNumber A1(10),A2(20),A3(0);
A3=A1.mul(A2);
A1=A1.add(A2);
ComplexNumber C1(2,3),C2(2.2,3.3),C3(0);
C3=C1.mul(C2);
C1=C1.add(C2);
cout<<"RealNumber add: ";
B1.print();
cout<<endl;
cout<<"RealNumber mul: ";
B3.print();
cout<<endl;
cout<<"IntegerNumber add: ";
A1.print();
cout<<endl;
cout<<"IntegerNumber mul: ";
A3.print();
cout<<endl;
cout<<"ComplexNumber add: ";
C1.print();
cout<<endl;
cout<<"ComplexNumber mul: ";
C3.print();
cout<<endl;

return 0;
}
