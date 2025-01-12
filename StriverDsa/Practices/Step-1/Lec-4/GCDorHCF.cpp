#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> ans;
        
        int a = 5;
        int b =  10;
        int c = a;
        int d =  b;
        int gcdNumber = 1;
    	// for(int i = min(a,b); i > 0 ;i-- ){
    	// 	if(a%i ==0 && b%i==0){
    	// 		gcdNumber = i;
    	// 		break;
    	// 	}
    	// }
    
    	while(a > 0 && b > 0){
    		if(a > b ){
    			a = a%b;
    		}else{
    			b = b%a;
    		}
    	}
    
    	if(a == 0){
    		gcdNumber = b;
    	}
    	else{
    		gcdNumber = a;
    	}
    	int lcm = (c * d) / gcdNumber;
    	cout << "lcm of a " << c << " b " << d << " is " << lcm <<  endl;
    	cout << "gcd of a " << c << " b " << d << " is " << gcdNumber <<  endl;

    	ans.push_back(lcm);
    	ans.push_back(gcdNumber);
    return 0;
}