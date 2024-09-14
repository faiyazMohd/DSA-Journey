// A B C D 
// B C D E
// C D E F 
// D E F G
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = ('A' + ((row+col) - 1))-1;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    
    // another method
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row -1;
        while (col <= n)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}