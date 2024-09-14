#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {1, 3, 4, 2, 6, 8};
    int n = 6;
    vector<int> ans;
    int i = 0, j = (n / 2);
    bool isDouble = 0;
    while ((i < n) && (j < n))
    {
        cout << "i is : " <<i<<" j is : " <<j<< endl;
        if ((arr[i] * 2) == arr[j])
        {
            isDouble = 1;
        }
        else
        {
            isDouble = 0;
            break;
        }
        i++;
        j++;
    }
    cout << "Value of isDouble is : " << isDouble << endl;
    if (isDouble)
    {
        for (int i = 0; i < n / 2; i++)
        {
            ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n/2; i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}