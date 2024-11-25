#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

int main() {
    string t;
    Time t1(3600 * 4 + 60 * 11 + 22);
    t = t1.toString();
    cout << "Time t is: " << t << endl;
    // should print 4:11:22

    return 0;
}
