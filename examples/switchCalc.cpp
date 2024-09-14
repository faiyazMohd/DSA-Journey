#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char o;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << "+ - * / %" << endl;
    cin >> o;
    switch (o)
    {
    case '+':
        cout << "The value of a " << o << " b is : " << a + b << endl;
        break;
    case '-':
        cout << "The value of a " << o << " b is : " << a - b << endl;
        break;
    case '*':
        cout << "The value of a " << o << " b is : " << a * b << endl;
        break;
    case '/':
        cout << "The value of a " << o << " b is : " << a / b << endl;
        break;
    case '%':
        cout << "The value of a " << o << " b is : " << a % b << endl;
        break;

    default:
       cout << "Please Enter correct operator";
        break;
    }
    return 0;
}