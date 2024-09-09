#include <iostream>
using namespace std;

int main() {
    /*
    //   1) 7
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
    */
    /*
    //   2) -> 3
    int a = 4, b = 3, c = 2;
    if (a > 0) { //true
        b -= 4; // 3-4= -1
        if (b > 0) { //false
            if (c > 0)
                c++;
            if (c <= 3)
                c--;
    }
    if (b < 0) // true
        a--; //a=2
    }
    c = a + b + c; // 3
    cout<<c<<endl;
    */
    /*
    //    3) b -> n=1
    int n = 1 % 2 + 4 % 2;
    cout << n << endl;
    */

    // 4 -> 6 
    int x = 3, y = x++, z = ++x;
    cout<<"x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
    cout << (z - x < y - x ? 5 : 6) <<  endl;
    return 0;
}
