#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include "BigInt.h"
using namespace std;

TEST_CASE("Test can create and render BigInts") {
    BigInt bi;
    CHECK(bi.toString() == "0");
    BigInt bi2(42);
    CHECK(bi2.toString() == "42");
    BigInt bi3(-42);
    CHECK(bi3.toString() == "-42");
    BigInt bi4("123456789012345678901234567890");
    CHECK(bi4.toString() == "123456789012345678901234567890");
    BigInt bi5("-923456789012345678901234567890");
    CHECK(bi5.toString() == "-923456789012345678901234567890");
}

TEST_CASE("Test can compare BigInts for equality") {
    BigInt i1("12345");
    BigInt i2("54321");
    BigInt i3("123456");
    BigInt i4("-654321");
    BigInt i5("54321");
    BigInt i6("-54321");
    CHECK((i2 == i5) == true);
    CHECK((i1 == i2) == false);
    CHECK((i1 == i3) == false);
    CHECK((i2 == i6) == false);
}

TEST_CASE("Test can compare BigInts for inequality") {
    BigInt i1("12345");
    BigInt i2("54321");
    BigInt i3("123456");
    BigInt i4("-654321");
    BigInt i5("54321");
    BigInt i6("-54321");
    CHECK((i2 > i5) == false);
    CHECK((i2 > i1) == true);
    CHECK((i4 > i1) == false);
    CHECK((i6 > i4) == true);
}

TEST_CASE ("Adding other inequality symbols"){
    BigInt i1("12");
    BigInt i2("-12");
    BigInt i3("24");
    BigInt i4("-33");
    CHECK((i1 < i1) == false);
    CHECK((i1 < i3) == true);
    CHECK((i2 < i1) == true);
    CHECK((i2 <= i2) == true);
    CHECK((i3 <= i1) == false);
    CHECK((i2 <= i1) == true);
    CHECK((i2 <= i4) == false);
    CHECK((i1 >= i1) == true);
    CHECK((i2 >= i1) == false);
    CHECK((i1 != i1) == false);
    CHECK((i2 != i1) == true);
}


TEST_CASE("Test helper function to add digit strings with same num digits") {
    CHECK(sumCommonLenDigitStrs("123", "321") == "444");
    CHECK(sumCommonLenDigitStrs("123", "123") == "246");
    CHECK(sumCommonLenDigitStrs("123", "222") == "345");
    CHECK(sumCommonLenDigitStrs("123", "119") == "242");
    CHECK(sumCommonLenDigitStrs("123", "888") == "c+011");
    CHECK(sumCommonLenDigitStrs("999", "999") == "c+998");
    CHECK(sumCommonLenDigitStrs("123456789012345678901234567890",
                                    "123456789012345678901234567890")
                                 == "246913578024691357802469135780");
    CHECK(sumCommonLenDigitStrs("900000000000000000000000000009",
                                    "900000000000000000000000000009")
                                 == "c+800000000000000000000000000018");
}

TEST_CASE("Test increment_digit_string helper function") {
    CHECK(incrementDigitString("8") == "9");
    CHECK(incrementDigitString("24") == "25");
    CHECK(incrementDigitString("100") == "101");
    CHECK(incrementDigitString("99") == "100");
    CHECK(incrementDigitString("1199") == "1200");
    CHECK(incrementDigitString("9999") == "10000");
}

TEST_CASE("Test can add BigInts") {
    BigInt i1("123");
    BigInt i2("321");
    BigInt i3("43210");
    BigInt i4("9999");
    BigInt i5("1");
    BigInt i6("123456789123456789123456789");
    CHECK((i1 + i2).toString() == "444");
    CHECK((i1 + i3).toString() == "43333");
    CHECK((i4 + i5).toString() == "10000");
    CHECK((i6 + i6).toString() == "246913578246913578246913578");
}

TEST_CASE("Test can subtract BigInts") {
    BigInt i1("123");
    BigInt i2("321");
    BigInt i3("43210");
    BigInt i4("9999");
    BigInt i5("1");
    BigInt i6("123456789123456789123456789");
    CHECK((i2 - i1).toString() == "198");
    CHECK((i1 - i3).toString() == "-43087");
    CHECK((i5 - i4).toString() == "-9998");
    CHECK((i6 - i6).toString() == "0");
    CHECK((i3 - i4).toString() == "33211");
}

TEST_CASE("Test can multiply BigInts") {
    BigInt i1("1");
    BigInt i2("-12");
    BigInt i3("22222");
    BigInt i4("145");
    CHECK((i1 * i3).toString() == "22222");
    CHECK((i3 * i1).toString() == "22222");
    CHECK((i3 * i4).toString() == "3222190");
    CHECK((i2 * i2).toString() == "144");
    CHECK((i1 * i2).toString() == "-12");
}
