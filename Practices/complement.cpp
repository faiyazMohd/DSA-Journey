#include <iostream>
using namespace std;

int main(){
    int n = 5;
        int mask=0;
        int m = n;
        // while(m!=0){
        //     mask += m|1;
        //     m = m >> 1;
        // }
        mask = 111;
        int ans = n ^ mask;
        cout << ans;
    return 0;
}