#include <iostream>
using namespace std;
int sumOfElements(int arr[],int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum ;
}
int main(){
    int size;
    cin >> size;
    int arr[50];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "sum of elements in our array is : " << sumOfElements(arr,size) << endl;
    return 0;
}