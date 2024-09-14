#include <iostream>   
using namespace std;

int main(){
    int arr[14]= {1,0,1,0,1,0,0,1,0,1,0,1,1};
    int n= 14;
    int right=0,left=n-1;
    while (right<left)
    {
        if(arr[right]==1 && arr[left]==0){
            int temp = arr[right];
            arr[right] = arr[left];
            arr[left] = temp;
            right++;
            left--;
        }
        else if(arr[right]==0){
            right++;
        }
        else
        {
            left--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}