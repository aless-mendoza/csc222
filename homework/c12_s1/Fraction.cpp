#include <string>
#include <list>
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
    int top = 0;
    int bottom = 1;
}

Fraction Fraction::toNumber(){
    top = stoi(sFraction.substr(0,sFraction.find("/")));
    bottom = stoi(sFraction.substr(sFraction.find("/")+1,-1));    
    return Fraction(top,bottom);
}

int Fraction::numerator(){
    return top;
}

int Fraction::denominator(){
    return bottom;
}
