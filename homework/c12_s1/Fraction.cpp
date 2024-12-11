#include <string>
#include "Fraction.h"
using namespace std;

//constructors
Fraction::Fraction(){
    this -> top = 0;
    this -> bottom = 1;
}

Fraction::Fraction(int top, int bottom) {
    this -> top = top;
    this -> bottom = bottom;
}

int Fraction::numerator(){
    return top;
}

int Fraction::denominator(){
    return bottom;
}
