#include <iostream>
using namespace std;

/*
// 1 -> 1
int main() { 
  bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short);
  bool floats = sizeof(float) == 0.5 * sizeof(double);
  bool chars = sizeof(char) == 1;
  int v = ints && floats && chars;
  cout << v << endl;
  return 0;
}

// 2 -> 10
int f() {
    return 1;
}

int f(int n) {
    return n + 1;
}

int f(int n, int m) {
    return n + m + 1;
}

int main() {
    cout << f() + f(0) + f(3, 4) << endl;
    return 0;
}

// 3 -> 2 
int f() {
    return 1;
} //1

int f(int n) {
    return n % 2 == 0 ? 1 : 0;
} //0

int f(int n, int m) {
    return n > m ? n - m : m - n;
} //1

int main() {
    cout << f() + f(11) + f(3, 4) << endl;
    return 0;
}

// 4 -> -230 
int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}


int main() {
    cout << f(3, 1, 2) << f(5, 2) << f(0) << endl;
    return 0;
}

// 5 -> 3309
int f(char x) {
    return x * x;
}

int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}


int main() {
    char ch = 3;
    cout << f(1, 4, 2) << f(5, 2) << f(0) << f(ch) << endl;
    return 0;
}
*/
// 6 -> 78-19
int f(char x) {
    return x * x;
}

int f(float g) {
    cout<<"ran g"<< endl;
    return int(g);
}

int f(int a, int b = 0, int c = 5) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}

int main() {
    char ch = 3;
    cout << f(2, 3, 4) << f(0, 2) << f(1) << f(ch) << endl;
    return 0;
}
