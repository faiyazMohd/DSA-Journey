#include <iostream>
using namespace std;
int fibo(int n){
    int a =0;
    int b =1;
    int c = 0;
    for (int i = 0; i < n-2; i++)
    {
        c = a + b;
        a = b;
        b = c; 
    }
    return c;
}
int main(){
    int n;
    cout << "Enter nth term of the fibonacii series" << endl;
    cin >> n;
    cout << "The nth term of the fibonacci series is : " << fibo(n)<< endl;
    return 0;
}