#include <iostream>
using namespace std;

int main(){
    int num = 1;
    switch(num*2+1){//we can also give expression like this
        case 1:
               cout << 1 << endl;
               break;
            //    continue; // cannot use continue in the switch case
        case 2:
               cout << 2 << endl;
               break;
        case 3:
               cout << 3 << endl;
               break;
        default:
               cout << "This is default" << endl;
    }
    return 0;
}