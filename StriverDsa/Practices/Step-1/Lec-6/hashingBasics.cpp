#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* using arr for hasing
    // int arr[5] = {1, 2, 1, 3, 2};
    // int hashArr[12] = {0};

    // for (int i = 0; i < 5; i++) { // arr has size 5
    //     if (arr[i] >= 0 && arr[i] < 12) {
    //         hashArr[arr[i]] += 1;
    //     }
    // }
    // for (int i = 0; i < 12; i++)
    // {
    //     cout << i << " " << hashArr[i] << endl;
    // }

    //* using map for hasing
    // int arr[5] = {1, 2, 1, 3, 2};
    // map  <int ,int> mpp;

    // for (int i = 0; i < 5; i++)
    // {
    //         mpp[arr[i]] +=  1;
    // }

    // for (auto i : mpp)
    // {
    //     cout << i.first << " -> " << i.second << endl;
    // }

    //* count characters in a string
    // string s = "abcdaaaabehf";
    // // int stringHash[26] = {0};
    // int stringHash[26] = {0};
    // for (int i = 0; i < 256; i++)
    // {
    //     stringHash[s[i]] += 1;
    // }

    // for (int i = 0; i < 256; i++)
    // {
    //     // cout << (char)(i + 'a') << " " << stringHash[i] << endl;
    //     cout << (char)(i ) << " " << stringHash[i] << endl;
    // }

    //* count characters in a string using map for hashing
    // string s = "abcdaaaabehf";
    // map <char,int> charHashMap;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     charHashMap[s[i]] += 1;
    // }

    // for (auto i : charHashMap)
    // {
    //     cout << i.first < " -> " << i.second << endl;
    // }

    // * using map for hasing find max and min occurence
    // int arr[6] = {1, 3 , 2, 3, 2,3};
    // map  <int ,int> mpp;

    // for (int i = 0; i < 6; i++)
    // {
    //         mpp[arr[i]] +=  1;
    // }

    // // for (auto i : mpp)
    // // {
    // //     cout << i.first << " -> " << i.second << endl;
    // // }
    // auto firstElement = mpp.begin();
    // auto lastElement = mpp.rbegin();

    // cout <<" min is " << firstElement->first  << " with " << firstElement->second<< " count "<< endl;
    // cout<<" max  is " << lastElement->first  << " with  " << lastElement->second << " count "<< endl;

    

    return 0;
}