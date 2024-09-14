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
    n = ~n+1;
    int i=0;
    int binary = 0;
    while (n!= 0)
    {
        int bit = n&1;
        binary = (bit * myPow(10 ,i)) + binary;
        n = n >> 1;
        i++;
    }
    cout << "-"<< binary << endl;
    
    return 0;
}