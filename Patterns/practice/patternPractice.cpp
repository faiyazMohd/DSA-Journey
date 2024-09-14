#include <iostream>
using namespace std;
// done till 23
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        int col1 = 1;

        while (col1 <= row-1)
        {
            cout<< " ";
            col1++;
        }
        

        int col2 = 1;
        while (col2 <= n-row+1)
        {
            cout << col2+row-1;
            col2++;
        }
        // int col2 = 1;
        // while (col2 <= row)
        // {
        //     cout << "*";
        //     col2++;
        // }
        
        // int col3 = 1;
        // while (col3 <= row-1)
        // {
        //     cout << "*";
        //     col3++;
        // }
        
        cout << endl;
        row++;
    }
}
