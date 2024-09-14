// AAAA
// BBBB
// CCCC
// DDDD
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    // char c = 65;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << c;
    //         j++;
    //     }
    //     cout << endl;
    //     c++;
    //     i++;
    // }
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+i-1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}   