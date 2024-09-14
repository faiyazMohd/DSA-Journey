#include <iostream>
using namespace std;

int main(){
    int n = 12300;
    int count = 0;
    while (n != 0)
    {
        n = n/10;
        count++;
    }
    cout << "The number of digits are : " << count << endl;
    return 0;
}