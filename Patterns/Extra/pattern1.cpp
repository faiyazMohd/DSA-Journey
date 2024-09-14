#include <iostream>
#include <math.h>
using namespace std;
void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);

int main()
{
    int n = 5;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    pattern7(4);// not working
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    return 0;
}
void pattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int row = 1; row < 2 * n; row++)
    {
        int totalColInRows = row > n ? 2 * n - row : row;
        for (int col = 1; col <= totalColInRows; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int row = 1; row < 2 * n; row++)
    {
        // for  space printing
        //  int spacePrint = row<=n?n-row:row-n;
        int spacePrint = row > n ? row - n : n - row;
        for (int space = 0; space < spacePrint; space++)
        {
            cout << " ";
        }

        // for * printing
        int totalColInRows = row > n ? 2 * n - row : row;
        for (int col = 1; col <= totalColInRows; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for  space printing
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }

        for (int col = row; col >= 1; col--)
        {
            cout << col;
        }
        for (int col = 2; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int row = 1; row < 2 * n; row++)
    {
        // for  space printing
        int spacePrint = row > n ? row - n : n - row;
        int colPart = row > n ? (2 * n) - row : row;
        for (int space = 0; space < spacePrint; space++)
        {
            cout << " ";
        }
        for (int col = colPart; col >= 1; col--)
        {
            cout << col;
        }
        for (int col = 2; col <= colPart; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    int originalN = n;
    n = 2 * n;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= n; col++)
        {
            cout << row << col<< n-row<< n-col << endl;
            int atEveryIndex = originalN - min(min(row, col), min(n - row, n - col));
            cout << atEveryIndex + "  ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row * 2) - 1; col++)
        {
            if (row > 1 && row < n && col > 1 && col < (row * 2) - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
            cout << endl;
    }
    for (int row = n; row >=1; row--)
    {
        // printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row * 2) - 1; col++)
        {
            if (row > 1 && row < n && col > 1 && col < (row * 2) - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
            cout << endl;
    }
}
void pattern9(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row * 2) - 1; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < (row * 2) - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
            cout << endl;
    }
    for (int row = n-1; row >=1; row--)
    {
        // printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int col = 1; col <= (row * 2) - 1; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < (row * 2) - 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
            cout << endl;
    }
}
void pattern10(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int  col = 1; col <= row; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < row)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        int space = 2*n - 2*row;
        for (int  col = 1; col <= space; col++)
        {
            cout << " ";
        }
        for (int  col = 1; col <= row; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < row)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int  col = 1; col <= row; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < row)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        int space = 2*n - 2*row;
        for (int  col = 1; col <= space; col++)
        {
            cout << " ";
        }
        for (int  col = 1; col <= row; col++)
        {
            if (row > 1 && row <= n && col > 1 && col < row)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    
}