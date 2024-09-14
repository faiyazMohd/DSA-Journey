// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    /*
    int row=1;
    while(row<=n){
        int first = 1;
        while(first<=row){
            cout << "*";
            first++;
        }
        
        cout << endl;
        row++;
    }
    int part2 = 1;
    while (part2<=n)
    {
        // int second = n-part2;
        int second = n-part2;
        while (second)
        {
            cout << "*";
            second--;
        }
        cout << endl;
        part2++;
    }
    */
    for (int  row = 1; row < 2*n; row++)
    {
        int totalColInRows = row>n?2*n-row:row;
        for (int  col = 1; col <= totalColInRows; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}