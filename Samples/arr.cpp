#include <iostream>
using namespace std;

int main(){
    int arr[9] = {5,4,7,8,2,1,5,3,9};
    int n = 9;
    int i = 1;
	while(i<n-1){
		if(arr[i-1] > arr[i]){
			swap(arr[i-1],arr[i]);
		}
		if(arr[i] < arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
		i+=2;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
    return 0;
}