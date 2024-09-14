// 1234
//  234
//   34
//    4
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    /*
    cin >> n;
    int row =1;
    while(row<=n){
        int space = row-1;
        while(space){
            cout << " ";
            space--;
        }

        int col = n-row+1;
        int temp = row;
        while (col)
        {
            cout << temp;
            col--;
            temp++;
        }
        cout << endl;
        row++;
    }
    */
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            cout << " ";
        }

        for (int col = row; col <= n; col++)
        {
            cout << col;
        }
        cout << endl;
    }

    return 0;
}