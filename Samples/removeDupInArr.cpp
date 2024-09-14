#include <iostream>
using namespace std;
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[10] = {4,2,5,7};
    // int a[3] = {1,1,2};
    // int i = 0;
    // int j = i+1;
    // int n = 10;
    // int itcount= 0;
    // while(itcount<n-1){
    //     if(a[i]!=a[j]){
    //         i++;
    //         j++;
    //     }
    //     else{
    //         for(int k = j;k<n-1;k++){
    //             swap(a[k],a[k+1]);
    //         }
    //     }
    //     cout <<endl<<"After "<<itcount<<" Iteration and i is "<<i<<" and j is "<<j<<endl;
    //     printArray(a,n);
    //     itcount++;
    // }
    // cout <<endl<<"After Completion of loop "<<endl;
    // printArray(a,n);
    // int n = 10;
    // int i, j;
    // for (i = 0, j = 1; j < n; j++)
    // {
    //     if (a[i] != a[j])
    //     {
    //         a[++i] = a[j];
    //     }
    // }
    // printArray(a, n);
    int i = 0, j = 1;
    int n =4;
    while (i < n-1)
    {
        if ((a[i] % 2 != 0) && (i % 2 == 0) && (a[i] % 2 == 0) && (j % 2 != 0))
        {
            swap(a[i], a[j]);
        }
        else if ((a[i] % 2 == 0) && (i % 2 != 0) && (a[i] % 2 != 0) && (j % 2 == 0))
        {
            swap(a[i], a[j]);
        }
        i++;
        j++;
        printArray(a,10);
        // else if ((a[i] % 2 == 0) && (i % 2 == 0))
        // {
        //     i++;
        // }
        // else if((a[j] % 2 == 0) && (i % 2 == 0))
        // {
        //     j++;
        // }
    }
    return 0;
}
// int n = a.size();
// int i = 0, j = 1;
// while (i < j)
// {
//     if ((a[i] % 2 != 0) && (a[j] % 2 == 0))
//     {
//         swap(a[i++], a[j++]);
//     }
//     // else if ((a[i] % 2 == 0) && (i % 2 == 0))
//     // {
//     //     i++;
//     // }
//     // else if((a[j] % 2 == 0) && (i % 2 == 0))
//     // {
//     //     j++;
//     // }
// }
// return a;