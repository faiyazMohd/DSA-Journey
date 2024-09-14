#include <iostream>
using namespace std;

int main()
{
    int arr[10] ;
    // cout << sizeof(arr) << endl;
    fill_n(arr,108,-21);// ways to initialize the entire array with an particular value
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        cout <<i<<"  "<< arr[i] << endl;
    }
    
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
    // cout << arr[5] << endl;
    return 0;
}