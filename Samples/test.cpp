#include <iostream>
#include <math.h>
using namespace std;
int reverseInteger(int m)
{
    int number = 0;
    while (m != 0)
    {
        int lastDigit = m % 10;
        number = (number * 10) + lastDigit;
        m = m / 10;
    }
    return number;
}
int mypow(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int maxInArr(int arr[], int size)
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
int minInArr(int arr[], int size)
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
int sumOfArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void reverseAnArr(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << "Maximum in an array is "<< maxInArr(arr,5) << endl;
    // cout << "Minimum in an array is "<< minInArr(arr,5) << endl;
    // cout << "Sum of all element in an array is "<< sumOfArr(arr,5) << endl;
    // reverseAnArr(arr,10);
    // cout << "Array after reversing " << endl;
    swapAlt(arr, 9);
    printArr(arr, 9);
    return 0;
}