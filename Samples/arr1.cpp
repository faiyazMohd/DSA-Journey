#include <iostream>
using namespace std;

int main()
{
    int nums[9] = {3, 4, 7, 8, 2, 1, 5, 3, 9};
    int n = 9;
    if (n == 1)
        cout << 0;
    // if (n == 2)
    //     int ans = nums[0] > nums[1] ? 0 : 1;
    //     cout << ans;

    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            cout <<"i is"<<  i << " ";
        }
    }

    // if (nums[0] > nums[1])
    //     cout << 0;
    // else if (nums[n - 1] > nums[n - 2])
    //     cout << n - 1;
    cout << -1;
    return 0;
}