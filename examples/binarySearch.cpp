#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2, 4, 6, 7, 8, 9};
    int n = 6;
    int index = binarySearch(arr, n, 9);
    cout << " index of 9 is " << index << endl;
    return 0;
}