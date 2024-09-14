#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int size;
    // cin>>size;
    // int arr[size];//bad practice
    // cout << sizeof(arr)/sizeof(int);
    // int arr[5] = {23,432,223,2323,23};
    // fill_n(arr,10,-21);// ways to initialize the entire array with an particular value
    // cout << sizeof(arr)/sizeof(int) << endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
        vector<int> nums = {1,2,3,4,3};
        int val =3;
        int n = nums.size();
        int count=0;
        for(int i=0 ;i<n;i++){
            if(nums[i]!=val){
                 nums[count++]=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            cout << nums[i] << " ";
        }
    return 0;
}