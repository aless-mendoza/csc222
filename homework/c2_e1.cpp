#include <iostream>
using namespace std;

int main () {
    cout << "scientific" << endl;
    float s = 4.2;
    cout << scientific << s << '\n';
    cout << "basefield" << endl;
    int n = 8;
    cout << "Some bits represented in decimal: " << dec << n << '\n';
    cout << "Same bits represented in hexadecimal: " << hex << n << '\n';
    cout << "Same bits represented in octal: " << oct << n << '\n';
    cout << "Exercises" << endl;
    cout << "1) 0=i f=.75" << endl;
    float f = 3.0 / 4.0;
    int i = f;
    cout << i << "=i f=" << f << endl;
    cout << "2) invalid" << endl;
    // cout << dec << 028 << endl;
    cout << "3) d - 42" << endl;
    cout << "4) d - 9.0" << endl;
    cout << 4.0 / 8.0 + 8.0 / 16.0 + 8.0 << endl;
    cout << "5) a - -0.02" << endl;
    cout << dec << -2e-2 << endl;
    cout << "6) a - 4.2" << endl;
    cout << "7) 211" << endl;
    int a = 5, j = ++i, k = i++;
    cout << "i=" << i << " j=" <<j<< " k=" <<k<< endl;
    cout << i << j << k << endl;
    cout << "8) d - 1523" << endl;
    cin >> i;
    cout << j + i << k - i << endl;
    
    return 0;
}
