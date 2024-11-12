#include <string>
#include <sstream>
#include <vector>
using namespace std;

// 2) solution 1) doesn't work for the other tests so you have to redo the code
/*
string render_num_vector(const vector<int>&) {
// 1) doctest is expecting a string of "1 3 7" so putting that will make it pass
    string s = "1 3 7";
    return s;
}
*/

// 2) this now works for our two additional tests as well
string render_num_vector(const vector<int>& nums) {
    ostringstream oss; // ostringstream means output stream; contains a sequences of chars 
    for (size_t i = 0; i < nums.size(); ++i) { // loops through all ints in the vector
        oss << nums[i];
        if (i < nums.size() - 1) {
            oss << " ";
        }
    }
    return oss.str();
}
