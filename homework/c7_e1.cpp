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
    string s1, s2;
    s1 = "XYZ";
    s2 = s1.substr(1, 1) + s1.substr(2) + s1.substr();
    s1 = s2.substr(1, 1) + s2.substr(2) + s2.substr();
    cout << s1 << ' ' << s2 << endl;
    return 0;
}
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
*/
// 12) sSaAcC 
int main() {
    string s = "CS@ACC";
    for (int i = 1; i < s.length(); i += 2)
        s[i - 1] = s[i] + 'a' - 'A';
    cout << s << endl;
    return 0;
}
