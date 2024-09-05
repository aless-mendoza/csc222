#include <iostream>
using namespace std;

int main() {
    int i = 4;
    float f = 5;
    bool b1 = i < f, b2 = f < i, b3 = f / i < i / f;
    // b1 = true, b2 = false, b3 = false
    if (b3) // false -> skip
        if (b2)
            i += 1;
        else
            i += 2;
    else if (b1) // true -> run
        i += 3; // i = 7
    else // skips
        i += 4;
    //print 7
    cout << i << endl;

    return 0;
}
