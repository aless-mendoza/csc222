#include <string>
#include <iostream>
using namespace std;
int main(){
    string sFraction="3/4";
    int num = stoi(sFraction.substr(0,sFraction.find("/")));
    int den = stoi(sFraction.substr(sFraction.find("/")+1,-1));
    cout<<num<<"/"<<den<<endl;
    return 0;
}
