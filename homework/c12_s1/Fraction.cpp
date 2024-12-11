#include <string>
#include <iostream>
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

Fraction::Fraction(string sFraction){
    this -> sFraction = sFraction;
}

Fraction Fraction::toNumber(){
    int num = stoi(sFraction.substr(0,sFraction.find("/")));
    int den = stoi(sFraction.substr(sFraction.find("/")+1,-1));    
    return Fraction(num,den);
}

int Fraction::numerator(){
    return top;
}

int Fraction::denominator(){
    return bottom;
}
