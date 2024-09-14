#include <iostream>
using namespace std;

int main()
{
    int arr1[4] = {1, 4, 2, 3};
    int arr2[6] = {-4, -3, 6, 10, 20, 30};
    int d = 3;
    int arr1_size = 4;
    int arr2_size = 6;
    int count = 0;
    for (int i = 0; i < arr1_size; i++)
    {
        for (int j = 0; j < arr2_size; j++)
        {
            int val = arr1[i] - arr2[j];
            if (abs(val) <= d)
            {
                cout << arr1[i] << " - " << arr2[j] << " = " << arr1[i] - arr2[j] << endl;
                count++;
            }
        }
    }
    cout << "count is " << count;

    return 0;
}