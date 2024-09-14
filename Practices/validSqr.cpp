#include <iostream>
using namespace std;
bool isPerfectSquare(int num) {
        int s=0,e=num;
        int mid = s+(e-s)/2;
        while(s<=e){
            unsigned long long int sqr = mid*mid;
            cout << sqr << endl;
            if(sqr==num){
                return true;
            }
            else if(sqr>num){
                e = mid-1;
            }
            else{
                s = mid+1;    
            }
            mid = s+(e-s)/2;
        }
        return false;
    }
int main(){
    int n =16;
    bool sqr = isPerfectSquare(n);
    cout <<n<<" is " << sqr<< endl;
    return 0;
}