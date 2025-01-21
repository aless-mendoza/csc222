#include <string>
using namespace std;

string increment_digit_string(const string &);
string sum_common_len_digit_strs(const string&, const string&);

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
};

