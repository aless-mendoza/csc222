#include <string>
#include <sstream>
#include <vector>
#include "Time.h"
using namespace std;

//constructors
Time::Time(int hour,int minute,int second){
    //"stuff inside"
    int h = hour;
    int m = minute; 
    int s = second;
}

Time::Time(int hour){
    //"stuff inside"
    int h = hour;
    int m = 0;
    int s = 0;
}

Time::Time(){
    int h = 0;
    int m = 0;
    int s = 0;
}

string Time::toString(){    
    return "0";
}
