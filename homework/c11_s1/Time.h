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

    //functions
    string toString();
};

