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
    // 4 -> 6 
    int x = 3, y = x++, z = ++x;
    cout<<"x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
    cout << (z - x < y - x ? 5 : 6) <<  endl;
    return 0;
    // 5 -> 1012
    int n = 2, m = n >> 1, p = m >> n, q = 1 << p, r = q << q;
    cout << m << p << q << r << endl;
    return 0;
    // 6 -> 1120
    int n = 2, m = n >> 1, p = n >> m, q = 1 << p, r = q >> q;
    cout << m << p << q << r << endl;
    return 0;
    
    // 7 2911110
    int x = 0x02, y = 011, z = x ^ y, u = z | x, v = u & 0;
    cout << x << y << z  << u << v << endl;
    return 0;
    
    // 8 36
    int n = (3 % 4 + 6) << 2;
    cout << n << endl;
    return 0;
    
    // 9
    int n = 3 << 2 + 4 >> 1;
    cout<<n<<endl;

    //10 671
    char a = 3 << 1, b = a | 3, c = a ^ b;
    cout << a << b << c << endl;
    cout << int(a) << int(b) << int(c) << endl;
    return 0;
    
    //11 158
    unsigned char n = 'a', m = ~n;
    cout << int(m) << endl;
    return 0;
    
    //12 "no"
    unsigned char n = 6, m = 9;
    cout << (n & m ? "yes" : "no") << endl;
    unsigned char x = 15, y = 15;
    cout << (x & y ? "yes" : "no") << endl;
    return 0;
    */
    //13 mustard and ice cream
    bool b1 = true, b2 = false, b3 = !b2;
    cout << (b1 || b2 ? "mustard" : "ketchup");
    cout << " and ";
    if (b3)
        if (b1 && !(b2 && b3))
            cout << "ice cream";
        else
            cout << "spinach";
    cout << endl;
    return 0;
}   

