#include <iostream>
using namespace std;
/*
// 1) 10
struct A
{
    int a;
    float b;
};

struct B
{
    int b;
    float a;
};

struct C
{
    A a;
    B b;
};

int main() {
    C c1 = {1, 2, 3, 4}, c2 = {5, 6, 7, 8};
    cout << c1.b.a + c2.a.b << endl;
//  c1 -> struct B -> float a  &  c2 -> struct A -> int b
//                       4                             6
    return 0;
}

// 2) 3
struct A
{
    int a;
    char b;
};

struct B
{
    char a;
    int b;
};

int main() {
    A a = {2, 'A'};
    B b = {'C', 1};
    cout << b.a - a.b - b.b + a.a << endl;
    cout << b.a << a.b << b.b << a.a << endl;
//         C(67)   A(65)   1     2
    return 0;
}
// 3) 11
int f(int n) {
    ++n;
    return n++;
}

int f2(int &n) {
    ++n;
    return n++;
}

int main() {
    int x = 2, y, z;
    y = f(x);
    // 5
    z = f2(y);
    // 4
    cout << x + y + z << endl;
    // 2+5+4
    return 0;
}
*/
// 4) 1 102.14 F
struct A
{
    char a;
    char b;
};

struct B
{
    char a;
    double b;
};

struct C
{
    A a;
    B b;
};

int main() {
    A a = {'a', 'A'};
    B b = {'B', 3.14};
    C c = {{'c', 'C'}, {'d', 4.9}};
    cout << (a.b < c.b.a) << ' ' << c.a.a + b.b << ' ' << char(a.b + 5);
    //        A  <   d            c(99)      3.14              A     5
    //           1                       102.14                  F
    cout << endl;
    return 0;
}
