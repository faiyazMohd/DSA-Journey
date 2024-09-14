#include <iostream>
using namespace std;

long long int mySqrt(int x) {
        int s = 0,e=x;
        long long int mid = s+(e-s)/2;
        long long int ans = -1;
        while(s<=e){
            long long int sqr = mid*mid;
            if(sqr==x){
                return mid;
            }
            else if(sqr<x){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
double mySqrtWithPrecission(int tempsol,int precission,int x){
        double factor = 1;
        double ans = tempsol;
        for (int i = 0; i < precission; i++)
        {
            factor = factor/10;
            for (double j = ans; j*j < x; j+=factor)
            {
                ans = j;
            }
            
        }
        return ans;
         
}
int main(){
    int x = 101;
    int tempSol = mySqrt(x);
    cout <<"Answer is "<< mySqrtWithPrecission(tempSol,3,x) << endl;
    return 0;
}