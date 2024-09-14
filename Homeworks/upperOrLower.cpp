#include <iostream>
using namespace std;

int main(){
    char a ;
    cin >> a;
    if(a>=48 && a<=57){
        cout << "Numeric" << endl;
    }
    else if(a>=65 && a<=90){
        cout << "UpperCase" << endl;
    }
    else if(a>=97 && a<=122){
        cout << "LowerCase" << endl;
    }
    return 0;
}   