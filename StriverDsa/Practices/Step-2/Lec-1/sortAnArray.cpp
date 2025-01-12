#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}
void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        bool isSwappped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwappped = true;
            }
        }
        if (!isSwappped)
        {
            break;
        }
    }
}

bool maxToLast(int arr[], int n)
{
    bool isSwappped = false;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            isSwappped = true;
        }
    }
    return isSwappped;
}
void recursiveBubbleSort(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    bool isSwappped = maxToLast(arr, n);
    if (!isSwappped)
    {
        return;
    }
    recursiveBubbleSort(arr, n - 1);
}
void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            swap(arr[j], arr[j - 1]);
        }
    }
}

void recursiveInsertionSort(int arr[], int n, int i)
{
    if (i >= n)return;
        // for (int i = 0; i < n; i++)
        // {
        // }
    
    for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
    {
        swap(arr[j], arr[j - 1]);
    }
    recursiveInsertionSort(arr, n , i + 1);
}
int main()
{
    int arr[5] = {4, 3, 5, 1, 2};
    // int arr[14] = {41, 9, 9, 48, 11, 2, 11, 12, 28, 10, 15, 4, 16, 48};
    // int n = 14;
    int n = 5;

    // bubbleSort(arr, n);
    // recursiveBubbleSort(arr, n - 1);
    recursiveInsertionSort(arr, n , 0);
    // selectionSort(arr, n);
    // insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}