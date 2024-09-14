// 12344321
// 123**321
// 12****21
// 1******1
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row=1;
    while (row<=n)
    {
        
        // printing first part of the pattern
        int first =(n-row)+1;
        int start = 1;
        while (first)
        {
            cout << start;
            start++;
            first--;
        }
        // printing the second part of the pattern
        int second = row-1;
        while (second)
        {
            cout << "*";
            second--;
        }
        // printing the third part of the pattern
        int third = row-1;
        while (third)
        {
            cout << "*";
            third--;
        }
        
        // printing the fourth part of the pattern
        int fourth = (n-row)+1;
        while (fourth)
        {
            cout << fourth;
            fourth--;
        }
        
       /*
        // printing first part of the pattern
        int first =(n-row)+1;
        int start = 1;
        while (first)
        {
            cout << start;
            start++;
            first--;
        }
         // printing the second part of the pattern
        int second = row-1;
        while (second){

            cout << "**";
            second--;
        }
        // printing the fourth part of the pattern
        int fourth = (n-row)+1;
        while (fourth)
        {
            cout << fourth;
            fourth--;
        }
        
        */

        cout << endl;
        row++;
    }
    
    return 0;
}