#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printArr(int ans[],int s,int e){
    cout << "[";
    for (int i = s; i <= e; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]";
}
int lastOcc(int arr[], int num, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        cout <<"mid is"<< mid << " value is "<< arr[mid]<< " and num is " << num << " "; 
        if (arr[mid] <= num)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
        printArr(arr,s,e);
        cout << " s is " << s <<" e is " << e <<" ";
        cout << endl;
    }
    return s;
}

int main()
{
    int arr1[] = {4, 8, 7, 5, 1} ;
    int arr2[] = {4, 48, 3, 0, 1, 1, 5};
    int m = 5, n = 7;
    sort(arr2, arr2 + n);
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        int last = lastOcc(arr2, arr1[i], n);
        cout << endl;
        ans.push_back(last);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    return 0;
}