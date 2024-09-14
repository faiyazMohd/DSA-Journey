  #include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number";
    cin>> n;
    int number = 2;
    bool isPrime=false;
    while (number<n)
    {
        if (n%number==0)
        {
            isPrime = false;
            break;
        }
        else
        {
            isPrime =true;
            number++;
        } 
    }
    if (!isPrime)
    {
    cout<<"It is Not a Prime Number";
    }
    else
    {
    cout<<"It is a Prime Number";
    }
    
    

    
    return 0;
}