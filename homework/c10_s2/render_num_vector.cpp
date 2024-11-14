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

// 3)
int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i){
         sum += nums[i];
    }
    return sum;
}

// 4)
int num_vector_product(const vector<int>& nums){
    int product = 1;
    for (int i = 0; i < nums.size(); ++i){
         product *= nums[i];
    }

    return product;
}

// 5)
string only_evens(const vector<int>& nums) {
    string evens = "";
    for (int i = 0; i < nums.size(); ++i){
         if (nums[i] % 2 == 0){
             string num = to_string(nums[i]);
             evens.append(num);
                  if (i != nums.size() - 1){
                      evens.append(" ");
     }
}
}
     return evens;
}
// 6)
string only_odds(const vector<int>& nums) {
    string odds = "";
    for (int i = 0; i < nums.size(); ++i){
         if (nums[i] % 2 == 1){
             string num = to_string(nums[i]);
             odds.append(num);
                  if (i != nums.size() - 2){
                      odds.append(" ");
     }
}
}
     return odds;
}
// 7)
string nums_between(const vector<int>& nums,int low,int high) {
    string betweens = "";
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] >= low && nums[i]<= high) {
            string num = to_string(nums[i]);
            betweens.append(num);
            if (i != nums.size() - 1){
                betweens.append(" ");
            }
        }
    }
    return betweens;
}
