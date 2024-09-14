#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    // for (int i = 0; i < n - 1; i += 2)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[i + 1];
    //     arr[i + 1] = temp;
    // }
    // another approach
    for (int i = 0; i < n; i += 2)
    {
        if (i+1 < n)
        {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
            
        }
        
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 7, 8, 5};
    int size = sizeof(arr) / sizeof(int);
    swapAlternate(arr, size);
    printArray(arr, size);
    return 0;
}