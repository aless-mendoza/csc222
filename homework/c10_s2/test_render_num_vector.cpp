#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("1 Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}
// 2) creating additonal tests
TEST_CASE("2 Testing render_num_vector - more than 3 values") {
    vector<int> nums = {1, 3, 7, 4};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7 4";
    CHECK(numstr == expected);
}
TEST_CASE("3 Testing render_num_vector - empty vector") {
    vector<int> nums = {};
    string numstr = render_num_vector(nums);
    string expected = "";
    CHECK(numstr == expected);
}
// 3)
TEST_CASE("3) Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    int addint = num_vector_sum(nums);
    int expected = 11;
    CHECK(addint == expected);
}

// 4)
TEST_CASE("5) Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    int productint = num_vector_product(nums);
    int expected = 42;
    CHECK(productint == expected);
}
// 5)
TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    string evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(evens == expected);
}
