#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    if (n < 0)
    {
        double ansN = 1.0;
        for (double i = 1; i <= n; i++)
        {
            ansN *= x;
        }
        cout << "pow is " << ansN << endl;
        double as = 1/ansN;
        cout << "it is "<<as <<endl;
        return ansN;
    }
    else
    {
        double ans = 1.0;
        for (double i = 1; i <= n; i++)
        {
            ans *= x;
        }
        return ans;
    }
}
double mypow(double x, int n)
{
    long double ans = 1.0;
    for (long double i = 1; i <= n; i++)
    {
        ans *= x;
    }
    return ans;
}
int main()
{
    double x = 2.00000;
    int n = -2;
    double ans = myPow(x, n);
    cout << ans ;
    return 0;
}