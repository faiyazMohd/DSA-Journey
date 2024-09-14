#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int number = 2;
    int sum = 0;
    while(number<=n){
        sum = sum + number;
        number = number + 2;
    }
    cout << "value of sum is : "<< sum;
    return 0;
}