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

bool BigInt::operator>(const BigInt& b2) const{
    if (negative == true and b2.negative == false) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return true;
    if (digits <= b2.digits) return false;
    return true;
}

bool BigInt::operator<(const BigInt& b2) const {
    if (negative == true and b2.negative == false) return true;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return true;
    if ((negative == b2.negative and negative == false) and (digits < b2.digits)) return true;
    return false;
}

bool BigInt::operator>=(const BigInt& b2) const {
    if (negative == true and b2.negative == false) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return true;
    if (digits < b2.digits) return false;
    return true;
}

bool BigInt::operator<=(const BigInt& b2) const {
    if (negative == true and b2.negative == false) return true;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return true;
    if (digits > b2.digits) return false;
    return true;
}

bool BigInt::operator!=(const BigInt& b2) const{
    return (((!negative) ? digits : "-" + digits) != ((!b2.negative) ? b2.digits : "-" + b2.digits));
}

