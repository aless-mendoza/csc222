#pragma once
#include <string>
using namespace std;

struct Point {
    //vars
    int x, y;

    //constructors
    Point();
    Point(int, int);
//    Point operator+(const Point& point2);

    //functions
    int makePoint();
};
