#pragma once
#include <string>
using namespace std;

struct Time {
    //vars
    int hour, minute, second;

    // constructors define args
    Time(int);
    Time(int, int, int);
    Time();
    Time(int,int);
    Time operator+(const Time& time2);

    //functions
    string toString();
};

