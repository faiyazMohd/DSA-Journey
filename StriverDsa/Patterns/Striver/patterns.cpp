#include <iostream>
using namespace std;

void printPattern1(int n)
{
    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int n)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern3(int n)
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    // 1 2 3 4 5 6
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // ***********
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i) * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < ((i + 1) * 2) - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}
void printPattern8(int n)
{
    // ***********
    //  *********
    //   *******
    //    *****
    //     ***
    //      *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (n - i) * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    // {
    //      *
    //     ***
    //    *****
    //   *******
    //  *********
    // ***********
    // ***********
    //  *********
    //   *******
    //    *****
    //     ***
    //      *

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((i) * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (n - i) * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern10(int n)
{
    //  *
    //  **
    //  ***
    //  ****
    //  *****
    //  ******
    //  *****
    //  ****
    //  ***
    //  **
    //  *

    // naive way
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * alternate aproach
    for (int i = 1; i <= ((n * 2) - 1); i++)
    {
        if (i <= ((n * 2) / 2))
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= (2 * n) - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}

void printPattern11(int n)
{
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
    // 0 1 0 1 0 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (j % 2 == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }

    // * alternate aproach

    // First row starts by printing a single 1.
    // int start = 1;

    // Outer loop for the no. of rows
    // for (int i = 0; i < n; i++)
    // {

    //     // if the row index is even then 1 is printed first
    //     // in that row.
    //     if (i % 2 == 0)
    //         start = 1;

    //     // if odd, then the first 0 will be printed in that row.
    //     else
    //         start = 0;

    //     // We alternatively print 1's and 0's in each row by using
    //     // the inner for loop.
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << start;
    //         start = 1 - start;
    //     }

    //     // As soon as the numbers for each iteration are printed, we move to the
    //     // next row and give a line break otherwise all numbers
    //     // would get printed in 1 line.
    //     cout << endl;
    // }
}
void printPattern12(int n)
{
    // 1          1
    // 12        21
    // 12       321
    // 1234    4321
    // 12345  54321
    // 123456654321

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (n * 2) - (i * 2); j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void printPattern13(int n)
{
    // 1
    // 2  3
    // 4  5  6
    // 7  8  9  10
    // 11  12  13  14  15
    // 16  17  18  19  20  21

    // * alternate aproach
    int numToPrint = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << numToPrint++ << " ";
        }
        cout << endl;
    }
}
void printPattern14(int n)
{
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E
    // A B C D E F

    // for (int i = 1; i <= n; i++)
    // {
    //     char charToPrint = 65;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << charToPrint << " ";
    //         charToPrint++;
    //     }
    //     cout << endl;
    // }
    // * alternate aproach
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printPattern15(int n)
{
    // A B C D E F
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A

    // for (int i = 1; i <= n; i++)
    // {
    //     char charToPrint = 65;
    //     for (int j = 1; j <= n-i+1; j++)
    //     {
    //         cout << charToPrint << " ";
    //         charToPrint++;
    //     }
    //     cout << endl;
    // }
    // * alternate aproach
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printPattern16(int n)
{
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    // F F F F F F

    char charToPrint = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << charToPrint << " ";
        }
        cout << endl;
        charToPrint++;
    }
}
void printPattern17(int n)
{
    //      A
    //     ABA
    //    ABCBA
    //   ABCDCBA
    //  ABCDEDCBA
    // ABCDEFEDCBA

    char charToPrint = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for (char j = 'A'; j < 'A' + i; j++)
        // {
        //     cout << j ;
        // }
        // for (char j = 'A' + i-2; j >= 'A' ; j--)
        // {
        //     cout << j ;
        // }
        // * alternate aproach
        char ch = 'A';
        int breakpoint = (((i) * 2) - 1) / 2;
        for (int j = 1; j <= ((i) * 2) - 1; j++)
        {
            cout << ch;
            if (j > breakpoint)

                ch--;

            else

                ch++;
        }

        cout << endl;
    }
}

void printPattern18(int n)
{
    // F
    // E F
    // D E F
    // C D E F
    // B C D E F
    // A B C D E F

    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A' + n - i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch++ << " ";
    //     }
    //     cout << endl;
    // }
    // * alternate aproach
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A' + n - i; j <= 'A' + n - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printPattern19(int n)
{
    // ************
    // *****  *****
    // ****    ****
    // ***      ***
    // **        **
    // *          *
    // *          *
    // **        **
    // ***      ***
    // ****    ****
    // *****  *****
    // ************
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i * 2 - 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= (n * 2) - (i * 2); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // TODO alternate aproach
}
void printPattern20(int n)
{
    // *          *
    // **        **
    // ***      ***
    // ****    ****
    // *****  *****
    // ************
    // *****  *****
    // ****    ****
    // ***      ***
    // **        **
    // *          *
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= (n * 2) - (i * 2); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= i * 2 - 2; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // TODO alternate aproach
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        // int spaces = (2 * i )- n;
        int spaces = (n * 2) - (i * 2);
        if (i > n)
            spaces = 2 * i - 2 * n;
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern21(int n)
{
    // ******
    // *    *
    // *    *
    // *    *
    // *    *
    // ******
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
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
void printPattern22(int n)
{
    // 3 3 3 3 3
    // 3 2 2 2 3
    // 3 2 1 2 3
    // 3 2 2 2 3
    // 3 3 3 3 3

    // 6 6 6 6 6 6 6 6 6 6 6
    // 6 5 5 5 5 5 5 5 5 5 6
    // 6 5 4 4 4 4 4 4 4 5 6
    // 6 5 4 3 3 3 3 3 4 5 6
    // 6 5 4 3 2 2 2 3 4 5 6
    // 6 5 4 3 2 1 2 3 4 5 6
    // 6 5 4 3 2 2 2 3 4 5 6
    // 6 5 4 3 3 3 3 3 4 5 6
    // 6 5 4 4 4 4 4 4 4 5 6
    // 6 5 5 5 5 5 5 5 5 5 6
    // 6 6 6 6 6 6 6 6 6 6 6
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= n - i + 1; j--)
    //     {
    //         cout << j;
    //     }
    //     for (int j = 1; j <= (n * 2) - (i * 2); j++)
    //     {
    //         cout << n - i + 1;
    //     }
    //     for (int j = n - i + 2; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i = n - 1; i > 0; i--)
    // {
    //     for (int j = n; j >= n - i + 1; j--)
    //     {
    //         cout << j;
    //     }
    //     for (int j = 1; j <= (n * 2) - (i * 2); j++)
    //     {
    //         cout << n - i + 1;
    //     }
    //     for (int j = n - i + 2; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // TODO alternate aproach
    for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
            // j == 1 || j == n || i == 1 || i == n
            // int leftDistance = j;
            // int topDistance = i;
            // int rightDistance = ((2 * n) - 1) - j;
            // int bottomDistance = ((2 * n) - 1) - i;
            // cout << "[" << leftDistance << " ";
            // cout << topDistance << " ";
            // cout << rightDistance << " ";
            // cout << bottomDistance << "] ";
              // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
        cout << endl;
    }
}

int main()
{

    int n = 4;
    // printPattern1(n);
    // printPattern2(n);
    // printPattern3(n);
    // printPattern4(n);
    // printPattern5(n);
    // printPattern6(n);
    // printPattern7(n);
    // printPattern8(n);
    // printPattern9(n);
    // printPattern10(n);
    // printPattern11(n);
    // printPattern12(n);
    // printPattern13(n);
    // printPattern14(n);
    // printPattern15(n);
    // printPattern16(n);
    // printPattern17(n);
    // printPattern18(n);
    // printPattern19(n);
    // printPattern20(n);
    // printPattern21(n);
    printPattern22(n);
    return 0;
}