#include <iostream>
using namespace std;

int main()
{
    int amt;
    cin >> amt;
    int n2000, n500, n200, n100, n50, n20, n10, n5, n2, n1;
    int num = 1;
    switch (num)
    {

    case 1:
        n2000 = amt /2000;
        amt = amt - (n2000 * 2000);
        cout << "2000 Notes : " << n2000 << endl;
        cout << amt << endl;
    case 2:
        n500 = amt / 500;
        amt = amt - (n500 * 500);
        cout << "500 Notes : " << n500 << endl;
        cout << amt << endl;

    case 3:
        n200 = amt/ 200;
        amt = amt - (n200*200);
        cout << "200 Notes : " << n200 << endl;
        cout << amt << endl;
    case 4:
        n100 = amt / 100;
        amt = amt - (n100 * 100);
        cout << "100 Notes : " << n100 << endl;
        cout << amt << endl;

    case 6:
        n50 = amt / 50;
        amt = amt - (n50 * 50);
        cout << "50 Notes : " << n50 << endl;
        cout << amt << endl;

    case 7:
        n20 = amt / 20;
        amt = amt - (n20 * 20);
        cout << "20 Notes : " << n20 << endl;
        cout << amt << endl;

    case 8:
        n10 = amt / 10;
        amt = amt - (n10 * 10);
        cout << "10 Notes : " << n10 << endl;
        cout << amt << endl;

    case 9:
        n5 = amt / 5;
        amt = amt - ( n5 * 5);
        cout << "5 Notes : " << n5 << endl;
        cout << amt << endl;
    
    case 10:
        n2 = amt / 2;
        amt = amt - ( n2 * 2);
        cout << "2 Notes : " << n2 << endl;
        cout << amt << endl;

    case 11:
        n1 = amt / 1;
        amt = amt - (n1 * 1);
        cout << "1 Notes : " << n1 << endl;
        cout << amt << endl;
    }
    return 0;
}