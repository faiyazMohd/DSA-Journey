#include <bits/stdc++.h>
using namespace std;
void mergeBothArray(int arr[], int low, int mid, int high)
{
    vector<int> tempArr;
    // int tempArr[high-low +1];
    int left = low;
    int right = mid + 1;
    cout << "low mid high left right " << low << " " << mid << " " << high << " " << left << " " << right << " " << endl;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            tempArr.push_back(arr[left]);
            // tempArr[left] = arr[left];
            left++;
        }
        else
        {
            tempArr.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        tempArr.push_back(arr[left]);
        // tempArr[left] = arr[left];
        left++;
    }
    while (right <= high)
    {
        tempArr.push_back(arr[right]);
        // tempArr[right] = arr[right];
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = tempArr[i - low];
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    cout << "low mid high " << low << " " << mid << " " << high << " " << endl;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeBothArray(arr, low, mid, high);
}
int main()
{
    int n = 3;
    int arr[n] = {3,2,1};
    // vector <int> arr = {3,2,4,1,3};
    // int n = arr.size();
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}