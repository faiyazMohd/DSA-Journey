/*
#include <iostream>
using namespace std;
int maxInArray(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = arr[i];
        }
        if(max>arr[i]){
            max = max;
        }
        else
        {
            max = arr[i];
        }
    }
    return max;
}
int minInArray(int arr[], int size)
{
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            min = arr[i];
        }
        if(min<arr[i]){
            min = min;
        }
        else
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {4, 12, 8, 10,4,34,34,645,3,0,-34,23,88,1};
    int size = sizeof(arr) / sizeof(int);
    cout << "Maximum in our Array is : " << maxInArray(arr, size) << endl;
    cout << "Minimum in our Array is : " << minInArray(arr, size) << endl;
    return 0;
}
*/
// another approach
#include <iostream>
using namespace std;
int maxInArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minInArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {4, 12, 8, 10, 4, 34, -54, 645, 3, 0, -34, 23, 88, 1};
    int size = sizeof(arr) / sizeof(int);
    cout << "Maximum in our Array is : " << maxInArray(arr, size) << endl;
    cout << "Minimum in our Array is : " << minInArray(arr, size) << endl;
    return 0;
}