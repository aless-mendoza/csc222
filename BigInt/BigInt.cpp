#include <iostream>
#include <string>
#include "BigInt.h"
using namespace std;

BigInt::BigInt()
{
    negative = false;
    digits = "0";
}

BigInt::BigInt(int i)
{
    negative = (i >= 0) ? false : true;
    digits = (i >= 0) ? std::to_string(i) : std::to_string(-i);
}

BigInt::BigInt(string n)
{
    negative = (n.front() == '-') ? true: false;
    digits = (n.front() == '-') ? n.substr(1, n.size() - 1) : n;
}

string BigInt::toString() const
{
    return (!negative) ? digits : "-" + digits;
}

bool BigInt::operator==(const BigInt& b2) const{
    return (((!negative) ? digits : "-" + digits) == ((!b2.negative) ? b2.digits : "-" + b2.digits));
}
/*
bool BigInt::operator>(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1>bInt2);
}
*/

bool BigInt::operator>(const BigInt& b2) const{
    if (negative == true and b2.negative == false) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return true;
    if (digits <= b2.digits) return false;
    return true;
}

bool BigInt::operator<(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1<bInt2);
}

bool BigInt::operator>=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1>=bInt2);
}

bool BigInt::operator<=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1<=bInt2);
}

bool BigInt::operator!=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1!=bInt2);
}
/*
BigInt BigInt::operator+(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1+bInt2);
}


BigInt BigInt::operator+(const BigInt& b2) const{
    string sum = "";
    int int1, int2;
    string bInt1 = digits;
    string bInt2 = b2.digits;
    for (int i = 0; i<=((bInt1.length()>bInt2.length()) ? bInt1.length() : bInt2.length()); i++){
        int1 = stoi(bInt1.substr(-1));
        int2 = stoi(bInt2.substr(-1));
        sum.insert(0, (int1+int2)%10);
        bInt1.erase(-1,1);
        bInt2.erase(-1,1);
    } 
    return (sum);
}


BigInt BigInt::operator*(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return (bInt1*bInt2);
}
*/
