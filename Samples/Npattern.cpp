#include <iostream>
using namespace std;

int main(){
    int n =7;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col==1||row==1||col==n||row==(n/2)+1)
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
    
    return 0;
}