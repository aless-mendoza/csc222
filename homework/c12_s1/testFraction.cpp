#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <string>
#include <doctest.h>
#include "Fraction.h"
using namespace std;

TEST_CASE("Test can create Fractions using two constructors") {
    Fraction f1;
    CHECK(f1.top == 0);
    CHECK(f1.bottom == 1);
    Fraction f2{3, 4};
    CHECK(f2.top== 3);
    CHECK(f2.bottom == 4);
}

TEST_CASE("Test third Fraction constructor using a string") {
    Fraction f1{"3/4"};
    f1.toNumber();
    CHECK(f1.top == 3);
    CHECK(f1.bottom == 4);
    Fraction f2{"37/149"};
    f2.toNumber();
    CHECK(f2.top == 37);
    CHECK(f2.bottom == 149);
}

TEST_CASE("Test can render a Fraction as a string") {
    Fraction f1{17, 25};
    CHECK(f1.toString() == "17/25");
    Fraction f2{-7, 11};
    CHECK(f2.toString() == "-7/11");
}

TEST_CASE("Test Fractions are stored in lowest terms") {
    Fraction f1{6, 8};
    CHECK(f1.toString() == "3/4");
    Fraction f2{8, 16};
    CHECK(f2.toString() == "1/2");
}

TEST_CASE("Test integer Fractions render properly") {
    Fraction f1(5, 1);
    CHECK(f1.toString() == "5");
    Fraction f2(18, 3);
    CHECK(f2.toString() == "6");
}

TEST_CASE("Test can construct Fraction from integer") {
    Fraction f1(5);
    CHECK(f1.top == 5);
    CHECK(f1.bottom == 1);
    Fraction f2(42);
    CHECK(f2.top == 42);
    CHECK(f2.bottom == 1);
}

TEST_CASE("Test string constructor with integers") {
    Fraction f1("15");
    CHECK(f1.top == 15);
    CHECK(f1.bottom == 1);
    Fraction f2("42");
    CHECK(f2.top == 42);
    CHECK(f2.bottom == 1);
}
TEST_CASE("Test gcd function") {
    CHECK(gcd(4, 14) == 2);
    CHECK(gcd(16, 12) == 4);
    CHECK(gcd(18, 27) == 9);
}

TEST_CASE("Test comparison operators") {
    Fraction f1(1, 4);
    Fraction f2(3, 4);
    Fraction f3(2, 5);
    Fraction f4(6, 8);
    CHECK((f2 > f1) == true);
    CHECK((f2 == f4) == true);
    CHECK((f1 < f3) == true);
    CHECK((f3 != f2) == true);
    CHECK((f4 >= f1) == true);
    CHECK((f4 <= f2) == true);
}

TEST_CASE("Test numerical operators"){
    Fraction f1(1, 4);
    Fraction f2(3, 4);
    Fraction f3(1, 2);
    Fraction f4(5, 5);
    Fraction f5(3, 8);
    CHECK((f2 + f1) == f4);
    CHECK((f2 - f1) == f3);
    CHECK((f2 * f3) == f5);
    CHECK((f5 / f3) == f2);
}
