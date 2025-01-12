#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n =  3214;
    int m =n;

    // brute force
	int count = 0;
	while(m > 0){
		count++;
		m = m /10;
	}
    cout <<  "total no of digits are " << count << endl;

    //optimal solution
    int noDigits =  (int)(log10(n) +1);

    cout <<  "total no of digits using log10 are  " << noDigits << endl;

    return 0;
}