#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void printName()
{
    if (cnt == 5)
    {
        return;
    }
    cout << "Faiyaz" << endl;
    cnt++;
    printName();
}
void printToN(int n, int i)
{
    if (i > n)
    {
        return;
    }
    cout << i++ << " ";
    printToN(n, i);
}
void printFromNto1(int n, int tempValue)
{
    int temp = tempValue;
    if (n < tempValue)
    {
        return;
    }
    cout << n-- << " ";
    printFromNto1(n, temp);
}

void printToNUsingBacktracking(int n, int i)
{
    if (i < 1)
    {
        return;
    }
    printToNUsingBacktracking(n, i - 1);
    cout << i << " ";
}
void printFromNUsingBacktracking(int n, int i)
{
    if (i > n)
    {
        return;
    }
    printFromNUsingBacktracking(n, i + 1);
    cout << i << " ";
}

int sumOfNnumbers(int n, int i, int iteration)
{
    if (iteration > n)
    {
        return i;
    }
    else
    {
        i += iteration;
        iteration++;
        return sumOfNnumbers(n, i, iteration);
    }
}

int sumOfNnosAlt(int i, int sum)
{
    if (i < 1)
    {
        return sum;
    }
    else
    {
        return sumOfNnosAlt(i - 1, sum + i);
    }
}

int sumOfNnosUsingFunctionalRec(int n)
{
    if (n == 0)
    {
        return 0; // base condition
    }
    return n + sumOfNnosUsingFunctionalRec(n - 1);
}

int factorialOfNnumbers(int n, int i, int iteration)
{
    if (iteration > n)
    {
        return i;
    }
    else
    {
        i *= iteration;
        iteration++;
        return factorialOfNnumbers(n, i, iteration);
    }
}
int factorialOfNnosUsingFunctionalRec(int n)
{
    if (n == 1)
    {
        return 1; // base condition
    }
    return n * factorialOfNnosUsingFunctionalRec(n - 1);
}
int fibonacciOfNnumbers(int n, int a, int b, int c, int iteration)
{
    if (iteration > n)
    {
        return c;
    }
    else
    {
        c = a + b;
        a = b;
        b = c;
        iteration++;
        return fibonacciOfNnumbers(n, a, b, c, iteration);
    }
}

int fibonacciOfNnousingFunctional(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fibonacciOfNnousingFunctional(n - 1);
    int secondLast = fibonacciOfNnousingFunctional(n - 2);
    return last + secondLast;
}

int reverseArrayUsingRecursion(int *arr, int l, int r)
{

    if (l >= r)
        return 0;
    swap(arr[l], arr[r]);
    // int temp = arr[l];
    // arr[l] = arr[r];
    // arr[r] = temp;

    return reverseArrayUsingRecursion(arr, l + 1, r - 1);
}
int reverseArrayUsingOneVar(int *arr, int n, int i)
{

    if (i > n / 2)
        return 0;
    swap(arr[i], arr[n - i - 1]);

    return reverseArrayUsingOneVar(arr, n, i + 1);
}
bool checkStringIsPalindrome(string str, int i)
{
    int n = str.length();
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
    {
        return false;
    }

    return checkStringIsPalindrome(str, i + 1);
}
bool isPalindromeHelper(const string& s, int left, int right) {
        // Base case: Indices have crossed
        if (left >= right) {
            return true;
        }

        // Skip non-alphanumeric characters
        if (!isalnum(s[left])) {
            return isPalindromeHelper(s, left + 1, right);
        }
        if (!isalnum(s[right])) {
            return isPalindromeHelper(s, left, right - 1);
        }

        // Compare characters (case insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        // Recursive call with updated indices
        return isPalindromeHelper(s, left + 1, right - 1);
    }

 string preprocessString(const string& s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) { // Check if the character is alphanumeric
                result += tolower(c); // Convert to lowercase and add to result
            }
        }
        return result;
    }
int main()
{
    // *print name 5 times
    // printName();

    //* print learly from 1 to n
    // printToN(10,1);

    //* print from n to 1
    // printFromNto1(10,1);

    // *print learly from 1 to n using backtraking
    // printToNUsingBacktracking(10,10);

    // *print from n to 1
    // printFromNUsingBacktracking(10,1);

    //* sum of n numbers
    // int sumOfNnos = sumOfNnumbers(6, 0, 1);
    // int sumOfNnos = sumOfNnosAlt(5, 0);//alternate way
    // int sumOfNnos = sumOfNnosUsingFunctionalRec(5); // using functional recursion
    // cout << "sum of n(10) natural number is " << sumOfNnos << endl;

    //* factorial of n numbers
    // int factOfNnos = factorialOfNnumbers(5, 1, 1);
    // int factOfNnos = factorialOfNnosUsingFunctionalRec(5); // using functional recursion
    // cout << "factorial of n(5) natural number is " << factOfNnos << endl;

    //* fibonacci of n numbers
    // int fiboOfNthterm = fibonacciOfNnumbers(6, 0, 1, 0, 2);
    int fiboOfNthterm = fibonacciOfNnousingFunctional(5); // using multiple recursion calls
    cout << "fibonacci of n(5) natural number is " << fiboOfNthterm << endl;

    //* reverse an array
    // int arr[6] = {1, 2, 3, 4, 5,6};
    // // int a = reverseArrayUsingRecursion(arr, 0, 5);
    // int a = reverseArrayUsingOneVar(arr, 6,0); // using one variable
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //* check is a string i palindrome
    // string s = "A man, a plan, a canal: Panama";
    // // s = s.erase(std::remove_if(s.begin(), s.end(), (int (*)(int))std::isalnum), s.end());
    // // string filtered = preprocessString(s);
    // // cout << "fileted si -" << filtered<< endl;
    // // bool ispalindrome = checkStringIsPalindrome(filtered, 0);
    // bool ispalindrome = isPalindromeHelper(s, 0,s.size());
    // cout << s << " is " << ispalindrome << endl;

    return 0;
}