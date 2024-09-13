#include <iostream>
using namespace std;

int main() {
    /*
    // 2 -> 133 
    int a = 4 >> 1, b = 3 ^ 1, c = 2 | 1;
    cout<<b<<endl;
    if (a > 0) {
        b++;
        if (b > c)
            c++;
        else
            a--;
    } else {
        b--;
    }
    cout << a << b << c << endl;
    
    //4 -> limes and apples 
    bool b1 = true, b2 = b1 / 2, b3 = !b2;
    cout << (!b1 || b2 ? "lemons" : "limes");
    cout << " and ";
    cout << (!b2 && b3 ? "apples" : "pears");
    cout << endl;
    return 0;
    
    //7 -> 133
    int a = 4 >> 1, b = 3 ^ 1, c = 2 | 1;
    if (a > 0) {
        b++;
        if (b > c)
            c++;
        else
            a--;
    } else {
        b--;
    }
    cout << a << b << c << endl;
    */
    //idk
    int n = ((3 << 2) + 1) << 1;
    cout << "Q1: " << n << endl;
    char a = 3 << 2, b = a & 5, c = a ^ b;
    cout << "Q2: " << int(a) << int(b) << int(c) << endl;
    int x = 0x1B, y = 010, z = y / 3, u = z << 2;
    cout << "Q3: " << x << y << z  << u << endl;
    int num = (9 % 5 + 2) << 2;
    cout << "Q5: " << num << endl;
    unsigned char k = 'a' + 2;
    cout << "Q6: " << k << int(k) << endl;
}

