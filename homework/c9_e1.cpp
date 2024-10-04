#include <iostream>
using namespace std;
/*
// 1) 12/6
int main() {
    int a[6];
    for (int i = 0; i < 6; i++)
        a[i] = 2 * i + 4;
    cout << a[4] / a[1] << endl;

    return 0;
}
// 2) 12 
int main() {
    int a = 2, b = 3;
    if (a > b && b > a) {
        a++;
        cout << "run1" << endl;
    }
    if (a > b || b > a) {
        b++;
        cout << "run2" << endl;
    }
    //4
    if (a | b) {
        a++;
        cout << "run3" << endl;
    }
    if (a & b){
        b++;
        cout << "run4" << endl;
    }
    cout << a * b << endl;

    return 0;
}

// 3) 2
int main() {
    int a = 1, b = 2, c;
    a = a << b;
    // 0100
    b = b << a;
    // 1 0000
    c = b >> a;
    // 0010
    cout << c << endl;

    return 0;
}
// 4) .1
int main() {
    float a[3][3] = {{.1, 1., 10.}, {10., .1, 1.}, {.1, 10., 1.}};
    float f = 10.;
    for (int i = 0; i < 3; i++)
        f *= a[i][i];
    // 10*.1=1 .1 .1
    cout << f << endl;

    return 0;
}

// 5) 2826
int main() {
  int nums[4] = {16, 8, 4, 2};
  int *p1 = nums + 2, *p2 = p1 - 1;
  p1++;
  cout << *p1 << ' ' << *p2 << ' ' << p1 - p2 << ' ';
  //       2              8           3-1=2 
  cout << *p1 + nums[p1 - p2] << endl;
  //        2   +    4 = 6

  return 0;
}

// 6) 7 11 11 7
void swap(int n, int m) {
    int t = n;
    n = m;
    m = t;
} 

void swap(int* ip1, int* ip2) {
    int t = *ip1;
    *ip1 = *ip2;
    *ip2 = t;
} 

int main() {
    int x = 7, y = 11;
    swap(x, y);
    cout << x << ' ' << y << ' ';
    //      7            11
    swap(&x, &y);
    cout << x << ' ' << y << endl;
    //      11          7
    return 0;
}

// 7) 5 
int main() {
    int i = 0;
    for (float f = .008; f < 1e2; f *= 1e1)
                     //     100      10
        i++;
    cout << i << endl;
    return 0;
}

// 8) w
char f1(char *p) {
    return ++(*p);
}

char *f2(char *p) {
    char c = *p - 3;
    *p = c;
    return p;
    //v
}

char *f3(char &n) {
    return &--n;
    //y
}

int main() {
    char mystery = 'z';
    cout << f1(f2(f3(mystery))) << endl;
    return 0;
}

// 9) 0 6 3 9
int main() {
    int *ip[2] = {new int[2], new int[2]};
    for (int i = 0; i < 4; i++)
        ip[i % 2][i / 2] = i * 3;
    //  
    cout << ip[0][0] << ' ' << ip[0][1] << ' ';
    cout << ip[1][0] << ' ' << ip[1][1] << endl;
    delete[] ip[0];
    delete[] ip[1];

  return 0;
}

// 10) 555666777
int main() {
    int *ia[3] = { new int[3], new int[3], new int[3] }, *ip;

    for (int i = 0; i < 3; i++) {
        ip = ia[i];
        *ip = ip[1] = *(ip + 2) = i + 5;
    }
    cout << ia[0][0] << ' ' << ia[0][1] << ' ' << ia[0][2] << ' ';
    cout << ia[1][0] << ' ' << ia[1][1] << ' ' << ia[1][2] << ' ';
    cout << ia[2][0] << ' ' << ia[2][1] << ' ' << ia[2][2] << endl;
    delete[] ia[0];
    delete[] ia[1];
    delete[] ia[2];
    return 0;
}
*/
// 11) 2 12 13 22 23 24
int main() {
    int* ia[3];

    for (int i = 0; i < 3; i++) {
        ia[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
            ia[i][j] = 10 * i + j + 2;
    }
    cout << ia[0][0] << endl;
    cout << ia[1][0] << ' ' << ia[1][1] << endl;
    cout << ia[2][0] << ' ' << ia[2][1] << ' ' << ia[2][2] << endl;
    for (int i = 0; i < 3; i++)
        delete[] ia[i];
    return 0;
}
