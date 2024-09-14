#include <iostream>
using namespace std;

int main(){
    int a = 1;
    while(1){
        cout << "Hii" << endl;
        switch(a){
            case 1:
                   cout << "Bye Bye" << endl;
                   exit(0);
        }
    }
    cout << "program endded" << endl;
    return 0;
}