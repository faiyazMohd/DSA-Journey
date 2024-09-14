#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    // if(n==0){
    //     return 1;
    // }
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n,r);
    cout << factorial(0) << endl;
    // cout <<"Answer is : "<< ans << endl;
    return 0;
}