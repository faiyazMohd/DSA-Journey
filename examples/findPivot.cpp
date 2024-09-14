#include <iostream>
using namespace std;

int main(){
    int arr[6]={3,4,6,7,1,2}; 
    int n = 6;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    cout << s << endl;
    return 0;
}