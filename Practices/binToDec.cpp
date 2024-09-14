#include <iostream>
using namespace std;

int myPow(int x , int y){
    int pow = 1;
    for(int i= 1;i<=y;i++){
        pow *= x;
    }
    return pow;
}
int main(){
    int n;
    cin >> n;
    int i = 0;
    int dec = 0;
    while(n!=0){
        int bit = n%10;
        if (bit)
        {
            dec = dec + myPow(2,i);
        }
        n = n /10;
        i++;
    }
    cout << dec << endl;
    return 0;
}