#include <string>
using namespace std;

string incrementDigitString(const string &);
string sumCommonLenDigitStrs(const string&, const string&);
string subtractCommonLenDigitStrs(const string&, const string&);
string multiplyDigitStrings(const string&, const string&);

class BigInt
{
    bool negative;
    string digits;

    public:
    // constructors
    BigInt();
    BigInt(int);
    BigInt(string);

    bool is_negative() const;

    // member functions
    string toString() const;

    bool operator==(const BigInt&) const;
    bool operator>(const BigInt&) const;
    bool operator<(const BigInt&) const;
    bool operator>=(const BigInt&) const;
    bool operator<=(const BigInt&) const;
    bool operator!=(const BigInt&) const;

    BigInt operator+(const BigInt&) const;
    BigInt operator-(const BigInt&) const;
    BigInt operator*(const BigInt&) const;
};

