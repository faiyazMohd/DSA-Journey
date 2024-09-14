#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,2};
    int size = 6;
	int ans =0;
    for(int i =0;i<size;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<size-1;i++){
        ans = ans^i;
    }
    // for(int i=0;i<size-1;i++){
    //     ans = ans^arr[i];
    // }
    cout << ans;
    return 0;
}