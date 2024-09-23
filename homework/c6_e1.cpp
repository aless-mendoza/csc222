/*
#include <iostream>
using namespace std;

int main() {
    int i = 12;
    float f = 1000.0;
    while (i > 0) {
        i -= 3;
        f /= 10;
    }
    cout << f << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int i = 12;
    float f = -1.0;
    while (i < 0) {
        f = f + 5.0 * f / -5;
        --i;
    }
    cout << i << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n = 1, m = n & 0;
    do {
        m++;
        if (m > 1)
            n = m;
    } while (n < 3);
    cout << m << endl;
    return 0;
}
#include <iostream>
using namespace std;

int doit(int n, int t = 2) {
    int x = n;
    while (t >>= 1)
        cout<<"t"<< t<<endl;
        x++;
        cout<<"x"<<x<<endl;
    return x;
}

int main() {
    cout <<"done"<< doit(2, 4) << doit(6) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b = 2 | 5;
    for (a = 0; a < 3; a += 2)
        b++;
    cout << b << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 7 ^ 5;
    while (n == 0) {
        if (m > 1)
            n = m;
        ++m;
    }
    cout << n << m << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for (float val = -10.0; val < 100.0; val = -val * 2) {
        if (val < 0 && -val >= 40)
            break;
        cout << '*';
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float v = 500.0;
    do {
        v /= 5;
        cout << '*';
    } while (v > 1.0);
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int u = 2, v = 1;
    do {
        u--;
        v++;
    } while (u >= 0);
    cout << u << '&' << v << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char ch = 'd';
    for (float f = -4.0; f < 100; f *= -2)
        cout << ++ch;
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 1;

    while (a > 0) {
        a--;
        b++;
    }

    cout << a << ' ' << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

char f(char n) {
    int count = 0;
    for (n = 4 * n; n > 0; n >>= 2)
        count++;
    return count;
}

void f(int n) {
    for (char count = f(char(n)); count > 0; count--)
        cout << '*';
}

int main() {
    char x = 3;
    f(3);
    cout << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    int n = 1, m = n << 2;
    switch(m) {
        case 1:
            n += 1;
            break;
        case 2:
            n += 2;
            break;
        case 4:
            n += 3;
            break;
        default:
            n += 4;
    }
    cout << n << endl;
    return 0;
}
