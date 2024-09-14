#include <iostream>
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
    int n=5;
    // cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(9);
    return 0;
}

void pattern1(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    // for (int row = 1; row <= n; row++)
    // {
    //    for (int  col = n; col >= row; col--)
    //    {
    //         cout << "*";
    //    }
    //    cout << endl;
    // }
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col <= n - row)
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
void pattern4(int n)
{
    /*
    for (int row = 1; row <= n; row++)
    {
        for (int  col = 1; col <= row; col++)
        {
            cout << "*";
        }
        int space = 2*n - 2*row;
        for (int  col = 1; col <= space; col++)
        {
            cout << " ";
        }
        for (int  col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int  col = 1; col <= row; col++)
        {
            cout << "*";
        }
        int space = 2*n - 2*row;
        for (int  col = 1; col <= space; col++)
        {
            cout << " ";
        }
        for (int  col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    */

    for (int row = 0; row < 2 * n; row++)
    {
        for (int col = 0; col < 2 * n; col++)
        {
            if (row + col >= (2 * n - 1) && (col - row) >= 0)
            {
                cout << "*";
            }
            else if (col - row <= 0 && row + col <= (2 * n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col;
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // printing space
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }

        // printing stars
        for (int col = 1; col <= n; col++)
        {
            cout << "*";
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

        // printing stars
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n-row; space++)
        {
         cout << " ";   
        }
        for (int col = 1; col <= 2*row-1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = n; row >=1; row--)
    {
        for (int space = 1; space <= n-row; space++)
        {
         cout << " ";   
        }
        for (int col = 1; col <= 2*row-1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
void pattern10(int n){
    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if(((row+col)%4==0) || (row==2&&col%4==0)){
                cout << "*";
            }
            
            else{
                cout << " ";
            }
        }
        cout << endl;
        
    }
    
}