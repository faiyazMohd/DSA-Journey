#include <iostream>
using namespace std;

int setBit(int n)
{
    int count = 0;
    for (; n!=0; )
    {
        int bit = n & 1;;
        if (bit==1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Total number of set Bits of a and b is : " << setBit(a)+setBit(b) << endl;
    return 0;
}