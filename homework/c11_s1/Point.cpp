#include <string>
#include <sstream>
#include <vector>
#include "Point.h"
using namespace std;

//constructors
Point::Point(int x, int y) {
    this -> x = x;
    this -> y = y;
}

Point::Point(){
    this -> y = 0;
    this -> x = 0;
}

Point Point::operator+(const Point& point2){
    return Point(x + point2.x, y + point2.y);
}

int Point::makePoint(){

    return 0;
}
