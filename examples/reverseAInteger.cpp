#include <iostream>
using namespace std;

int main()
{
    int n= 2345;
    int sum = 0;
    int product = 1;
    for (int i = 0; n > 0; i++)
    {
        int rem = n % 10;
        sum = sum + rem;
        product = product * rem;
        n = n / 10;
    }
    int answer = product - sum;
    cout << answer;
    return 0;
}