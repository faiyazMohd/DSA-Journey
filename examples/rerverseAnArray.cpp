#include <iostream>
using namespace std;
void reverseAnArray(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[(n-1)-i];
        arr[(n-1)-i] = temp;
    }
    
    // for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
}
void reverseAnArray1(int arr[],  int end)
{
    // another appraoch
    // for (int start=0; start < end; start++,end--)
    // {
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;

    // }
    int start = 0;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    cout << "Before reversing .." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int start = 1;
    reverseAnArray(arr,size);
    // reverseAnArray1(arr, size - 1);

    cout << endl
         << "After reversing .." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}