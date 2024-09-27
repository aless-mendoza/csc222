#include <iostream>
#include <string>
using namespace std;

/*
// 1) compilation error
int main() {
    int n = 2;
    string s = "2";
    cout << (s == n) <<  endl;
    return 0;
}
// 2) ABCCB
int main() {
    string s = "ABC";
    cout<<s.length()<<endl;
    s.append(s.substr(2)).push_back(s[s.length() - 3]);
    cout << s << endl;
    return 0;
}
// 3) !@_### 
string multi_copy(string s = "_", int n = 1) {
    string clone_str;
    while (n--)
        clone_str += s;
    return clone_str;
}

int main() {
    string pattern = "!@";
    cout << multi_copy(pattern) << multi_copy () << multi_copy("#", 3) << endl;
    return 0;
}
// 4) GCTAA 
int main() {
    string s1 = "ACC";
    string s2 = "GCTAA";
    string s;
    s1.swap(s2);
    s2.swap(s);
    s.swap(s2);
    cout << s1 << endl;
    return 0;
}
// 5) 10
int main() {
    string s = "School";
    int i = s.compare("Grade") > 0;
    int j = s.compare("High") < 0;
    cout << i << j << endl;

    return 0;
}
// 6) 01 
int main() {
    string s1 = "Abc", s2 = "A";
    int i = s1.compare(s2) < 0;
    cout<<s1.compare(s2)<<endl;
    int j = s1.length() > s2.length();
    cout << i << j << endl;
    return 0;
}
*/
// 7) ZXYZYZXYZ YZXYZ

int main() {
    string s1, s2;
    s1 = "XYZ";
    s2 = s1.substr(1, 1) + s1.substr(2) + s1.substr();
    s1 = s2.substr(1, 1) + s2.substr(2) + s2.substr();
    cout << s1 << ' ' << s2 << endl;
    return 0;
}
/*
// 8) 8
int main() {
    string s = "W";
    s.append(s).append(s).append(s);
    cout << s.length() << endl;
    return 0;
}
// 9) 9 
namespace alpha {
    int i = 4;
}
namespace beta {
    int i = alpha::i + 1;
}
int main() {
    beta::i += alpha::i;
    {
        using namespace beta;
        cout << i << endl;
    }
    return 0;
}
// 10) 9 
namespace alpha {
    int i = 4;
}

namespace beta {
    int i = alpha::i + 1;
}

int main() {
    beta::i += alpha::i;
    {
        using namespace beta;
        cout << i << endl;
    }

    return 0;
}
// 11) 2 7 
namespace ACC {
    int program_count = 4;
}
namespace ACC {
    int programs2024 = program_count + 2;
}
int main() {
    ACC::program_count /= 2;
    {
        using namespace ACC;
        programs2024++;
    }
    cout << ACC::program_count << ' ' << ACC::programs2024 << endl;
    return 0;
}
// 12) sSaAcC 
int main() {
    string s = "CS@ACC";
    for (int i = 1; i < s.length(); i += 2)
        s[i - 1] = s[i] + 'a' - 'A';
    cout << s << endl;
    return 0;
}
// 13) 3 2 
namespace A {
    int n = 1;
}

namespace B {
    int n = 2;
}

int main() {
    { using namespace A;
        B::n = n + 1;
    }
    { using namespace B;
        A::n = n + 1;
    }
    cout << A::n << ' ' << B::n << endl;
    return 0;
}
// 14) YES
int main() {
    string s1 = "acc";
    string s2 = "ACC";
    if (s1 > s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
// 15) BAC
int main() {
    string s1 = "A";
    string s2 = "B";
    string s3 = "C";
    s1.swap(s2);
    s2.swap(s3);
    s3.swap(s2);
    cout << s1 << s2 << s3 << endl;
    return 0;
}

// 16) xyz
//     error
int main() {
    //string s = "x";
    //cout << s + "y" + "z" << endl;
    string z = "z";
    cout << "x" + "y" + z << endl;
    return 0;
}
// 17) PQPQQ
int main() {
    string s = "PQ";
    s.append(s).push_back(s[s.length() - 1]);
    cout << s << endl;
    return 0;
}
// 18) CDEFG
//     EFG
int main() {
    string s = "ABCDEFGHIJ";
    cout << s.substr(2, 5)<<endl;
    cout << s.substr(2, 5).substr(2).substr() << endl;
    return 0;
}
// 19) -1
int main() {
    string s1 = "ACC";
    string s2 = "ACC!";
    cout << s1.compare(s2) << endl;
    return 0;
}
// 20) -230 
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
// 21) 3309
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
// 22)78-19
int f(char x) {
    return x * x;
}

int f(float g) {
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
int main() {
    string s = "PQ";
    s.push_back(s[1]);
    cout << s << endl;
    return 0;
}
*/
