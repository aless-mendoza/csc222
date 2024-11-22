#include <string>
#include <sstream>
#include <vector>
#include "Time.h"
using namespace std;

//constructors
Time::Time(int hour,int minute,int second){
    //"stuff inside"
    this -> hour = hour;
    this -> minute = minute; 
    this -> second = second;
}

Time::Time(int hour, int minute){
    this -> hour = hour;
    this -> minute = minute;
    this -> second = 0;
}

Time::Time(int second){
    //"stuff inside"
    this -> hour = second/3600;
    second -= hour * 3600;
    this -> minute = second/60;
    second -= minute * 60;
    this -> second = second;
}

Time::Time(){
    this -> hour = 0;
    this -> minute = 0;
    this -> second = 0;
}

Time Time::operator+(const Time& time2){
    return Time(hour + time2.hour, minute + time2.minute);
}

string Time::toString(){    
    string t = to_string(hour)+":";

    if(minute<10){
        t+="0";
    }
    t += to_string(minute)+":";

    if(second<10){
        t+="0";
    }
    t += to_string(second);

    return t;
}






