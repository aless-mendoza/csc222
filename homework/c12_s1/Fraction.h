#pragma once
#include <string>
using namespace std;

struct Fraction {
    //vars
    int top, bottom;

    //construction
    Fraction();
    Fraction(int,int);

    //function
    int numerator();
    int denominator();
};
