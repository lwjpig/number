#ifndef NUMBER_H
#define NUMBER_H

class Number
{
public:
virtual void print(){}
virtual Number add(const Number& other){return other;}
virtual Number mul(const Number& other){return other;}
};

#endif
