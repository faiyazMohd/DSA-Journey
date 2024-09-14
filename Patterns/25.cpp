//    1
//   121
//  12321
// 1234321
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // printing 1st triangle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // printing 2nd triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        // printing 3rd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
    return 0;
}