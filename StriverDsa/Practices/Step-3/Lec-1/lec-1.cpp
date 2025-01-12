#include <bits/stdc++.h>
using namespace std;
int findLargestElement(int arr[], int n)
{
    int largestElem = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestElem)
            largestElem = arr[i];
    }
    return largestElem;
}

int findSecondLargestElement(int arr[], int n)
{
    int largestElem = arr[0];
    int secondLargestElem = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestElem)
        {
            secondLargestElem = largestElem;
            largestElem = arr[i];
        }
        else if (arr[i] < largestElem && arr[i] > secondLargestElem)
        {
            secondLargestElem = arr[i];
        }
    }
    if (secondLargestElem == largestElem)
    {
        return -1;
    }

    return secondLargestElem;
}

int findSecondSmallestElement(int arr[], int n)
{
    int largestElem = arr[0];
    int secondLargestElem = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < largestElem)
        {
            secondLargestElem = largestElem;
            largestElem = arr[i];
        }
        else if (arr[i] != largestElem && arr[i] < secondLargestElem)
        {
            secondLargestElem = arr[i];
        }
    }
    if (secondLargestElem == largestElem)
    {
        return -1;
    }

    return secondLargestElem;
}

void removeDuplicates(int arr[], int n)
{
    int i = 1;
    int j = 1;
    while (j < n - 1)
    {
        cout << "i is " << i << " j is " << j << endl;
        cout << "i value is " << arr[i - 1] << " j value is " << arr[j] << endl;
        if (arr[i - 1] < arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    // int arr[5] = {2, 3, 4, 1, 5};
    // int n = 5;

    // // cout << "largest element in an array is " << findLargestElement(arr, n) << endl;
    // cout << "Second largest element in an array is " << findSecondLargestElement(arr, n) << endl;
    // cout << "Second smallest element in an array is " << findSecondSmallestElement(arr, n) << endl;

    // int sortedArr[7] = {1,1,2,2,2,3,3};
    int sortedArr[3] = {1,1,2};
    int sortedArrLength = 3;

    removeDuplicates(sortedArr,sortedArrLength);

    for (int i = 0; i < sortedArrLength; i++)
    {
        cout << sortedArr[i] << " " ;
    }

    return 0;
}