#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write C++ code here
    int n = 6;
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        // cout << i << " ";
        if (n % i == 0)
        {
            std::cout << i << " ";
            ans.push_back(i);
            if (n / i > i)
            {
                std::cout << n / i << " ";
                ans.push_back(n / i);
            }
        }
    }
    cout << endl;

    sort(ans.begin(),ans.end());
    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}