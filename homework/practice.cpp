#include <iostream>
using namespace std;

int main()
{
    int i = 5, j = i++, k = ++i;
    cin >> i;
    cout << j + i << k - i << endl;
    return 0;
}
