// ABCD
// EFGH
// IJKL
// MNOP
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    char c = 65;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << c;
            j++;
            c++;
        }
        cout << endl;
        i++;
    }

    return 0;
}