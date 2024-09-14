#include <iostream>
using namespace std;

int AP(int n){
    return (3*n)+7;
}
int main(){
    int n;
    cout << "Enter the number of terms you want : " << endl;
    cin >> n;
    cout << "nth term is : " << AP(n) << endl;
    return 0;
}