#include <iostream>
using namespace std;
int firstOccurence(int nums[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (nums[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int nums[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (nums[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > nums[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int nums[6] = {1, 2,3, 3, 3, 5};
    int n = 6;
    int k = 3;
    cout << "first occurrence 3 is  "<< firstOccurence(nums,n,k)<< endl;
    cout << "last occurrence 3 is  "<< lastOccurence(nums,n,k)<< endl;
    return 0;
}