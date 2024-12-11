#pragma once
#include <string>
using namespace std;

struct Fraction {
    //vars
    int top, bottom;
    string sFraction;

    //construction
    Fraction();
    Fraction(int,int);
    Fraction(string);

    //function
    int toNumber();
    int numerator();
    int denominator();
};
