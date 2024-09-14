#include <iostream>
using namespace std;

int main()
{
    int arr[8] = { 1, 0, 2, 3, 0, 4, 5, 0 };
     int n = 8;
    for (int i = 0; i < n - 1;i++)
    {
        int temp1;
        if (arr[i] == 0)
        {
            temp1 = arr[i + 1];
            arr[i + 1] = arr[i];
            for (int j = i + 2; j < n; j++)
            {
                int temp2 = arr[j];
                arr[j] = temp1;
                temp1 = temp2;
            }
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}