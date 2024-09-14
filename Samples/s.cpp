#include <iostream>
using namespace std;

int main(){
    // int a=0,b=5;
    // // int c = a^b;
    // a = a >> 1;
    // cout << a;
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double b;
    string str;
    cin >> j;
    cin >> b;
    getline (cin, str);
    cout << i+j << endl;
    double sum = d + b;
    cout << sum << endl;
    string cocat= s+str;
    cout << cocat << endl;
    return 0;
}