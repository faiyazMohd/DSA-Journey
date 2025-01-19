#include <bits/stdc++.h>
using namespace std;
int findLargestElement(int arr[], int n)
{
    int largestElem = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestElem)
            largestElem = arr[i];
    }
    return largestElem;
}

int findSecondLargestElement(int arr[], int n)
{
    int largestElem = arr[0];
    int secondLargestElem = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestElem)
        {
            secondLargestElem = largestElem;
            largestElem = arr[i];
        }
        else if (arr[i] < largestElem && arr[i] > secondLargestElem)
        {
            secondLargestElem = arr[i];
        }
    }
    if (secondLargestElem == largestElem)
    {
        return -1;
    }

    return secondLargestElem;
}

int findSecondSmallestElement(int arr[], int n)
{
    int largestElem = arr[0];
    int secondLargestElem = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < largestElem)
        {
            secondLargestElem = largestElem;
            largestElem = arr[i];
        }
        else if (arr[i] != largestElem && arr[i] < secondLargestElem)
        {
            secondLargestElem = arr[i];
        }
    }
    if (secondLargestElem == largestElem)
    {
        return -1;
    }

    return secondLargestElem;
}

void removeDuplicates(int arr[], int n)
{
    int i = 1;
    int j = 1;
    while (j < n - 1)
    {
        cout << "i is " << i << " j is " << j << endl;
        cout << "i value is " << arr[i - 1] << " j value is " << arr[j] << endl;
        if (arr[i - 1] < arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
        }
        else
        {
            j++;
        }
    }
}
void rotateArrayBy1left(int arr[], int n)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     swap(arr[i], arr[i + 1]);
    // }

    // alt aproach
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        swap(arr[i], arr[i - 1]);
    }
    arr[n - 1] = temp;
}
void rotateArrayByKElementleft(int arr[], int n, int k)
{
    for (int i = 0; i < k % n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            swap(arr[j], arr[j + 1]);
        }
    }
}

void rotateArrayByKElementleftALT(int arr[], int n, int d)
{
    d = d % n;
    int tempArr[d];
    for (int i = 0; i < d; i++)
    {
        tempArr[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        cout << " i is " << i;
        cout << " i - d is " << i - d << endl;
        cout << " arr[i] is " << arr[i] << endl;
        arr[i - d] = arr[i];
    }
    // int j = 0 ;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = tempArr[i - (n - d)];
        // arr[i]  = tempArr[j];
        // j++;
    }
}
void rotateArrayByKElementRightALT(int arr[], int n, int d)
{
    // d = d % n;
    // int tempArr[d];
    // for (int i = 0; i < d; i++)
    // {
    //     // cout << " i is " << i ;
    //     // cout << " n is " << n ;
    //     // cout << " d is " << d ;
    //     tempArr[i] = arr[n-d+i];
    // }

    // for (int i = n-d-1; i >= 0; i--)
    // {
    //     // cout << " i is " << i ;
    //     // cout << " i + d is " << i+d << endl ;
    //     // cout << " arr[i] is " << arr[i]<< endl ;
    //     arr[i + d] = arr[i];
    // }

    // for (int i = 0; i < d; i++)
    // {
    //     arr[i]  = tempArr[i];
    // }

    // alt way gpt
    d = d % n; // Ensure d is within bounds
    int tempArr[n];
    // Step 1: Store the rotated elements in the correct order in tempArr
    for (int i = 0; i < n; i++)
    {
        tempArr[(i + d) % n] = arr[i];
    }

    // Step 2: Copy tempArr back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = tempArr[i];
    }
}

void reverseAnArray(int arr[], int m, int n)
{
    for (int i = m; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
void rotateArrayByKElementleftUsingReverse(int arr[], int n, int d)
{
    d = d % n;
    // reverseAnArray(arr,0,d);
    // reverseAnArray(arr,d+1,n);
    // reverseAnArray(arr,0,n);

    // using in built reverse function

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

void rotateArrayByKElementRightUsingReverse(int arr[], int n, int d)
{
    d = d % n;
    // reverseAnArray(arr,0 ,n -d);
    // reverseAnArray(arr,0+n -d,n);
    // reverseAnArray(arr,0,n);

    // using in built reverse function

    reverse(arr, arr + n - d);
    reverse(arr + n - d, arr + n);
    reverse(arr, arr + n);
}

void shiftZerostoEnd(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != 0)
        {
            i++;
        }
        else if (arr[j] == 0)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void shiftZerostoEndAlt(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = 0, j = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int linearSearch(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return i;
    }

    return -1;
}

vector<int> findUnion(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> unionElements;
    while (i < n1 && j < n2)
    {
        if (((arr1[i] <= arr2[j])))
        {
            if (unionElements.size() == 0 || unionElements.back() != arr1[i])
            {
                /* code */
                unionElements.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionElements.size() == 0 || unionElements.back() != arr2[j])
            {
                /* code */
                unionElements.push_back(arr2[j]);
            }

            j++;
        }
    }

    while (i < n1)
    {
        if (unionElements.size() == 0 || unionElements.back() != arr1[i])
        {
            /* code */
            unionElements.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionElements.size() == 0 || unionElements.back() != arr2[j])
        {
            /* code */
            unionElements.push_back(arr2[j]);
        }

        j++;
    }

    return unionElements;
}
vector<int> findIntersection(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> intersectionElements;
    while (i < n1 && j < n2)
    {
        if (((arr1[i] < arr2[j])))
        {
            i++;
        }
        else if (((arr1[i] > arr2[j])))
        {
            j++;
        }
        else
        {
            intersectionElements.push_back(arr1[i]);
            // if (intersectionElements.size() == 0 || intersectionElements.back() != arr1[i])
            // {
            //     /* code */
            // }
            i++;
            j++;
        }
    }
    return intersectionElements;
}
vector<int> findIntersectionBrute(int arr1[], int arr2[], int n1, int n2)
{
    int visitedArr[n2] = {0};
    vector<int> intersectionElements;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visitedArr[j] == 0)
            {
                intersectionElements.push_back(arr1[i]);
                visitedArr[j] = 1;
                break;
            }
            if (arr2[j] > arr1[i])
                break;
        }
    }

    return intersectionElements;
}
int main()
{
    // int arr[5] = {2, 3, 4, 1, 5};
    // int n = 5;

    // // cout << "largest element in an array is " << findLargestElement(arr, n) << endl;
    // cout << "Second largest element in an array is " << findSecondLargestElement(arr, n) << endl;
    // cout << "Second smallest element in an array is " << findSecondSmallestElement(arr, n) << endl;

    // int sortedArr[7] = {1,1,2,2,2,3,3};
    // int sortedArr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sortedArr[9] = {1, 0, 7, 8, 0, 0, 2, 0, 3};
    int sortedArrLength = 9;

    // removeDuplicates(sortedArr,sortedArrLength);
    // rotateArrayBy1left(sortedArr, sortedArrLength);
    // rotateArrayByKElementleft(sortedArr, sortedArrLength,2);
    // rotateArrayByKElementleftALT(sortedArr, sortedArrLength,2);
    // rotateArrayByKElementRightALT(sortedArr, sortedArrLength, 3);
    // rotateArrayByKElementRightUsingReverse(sortedArr, sortedArrLength,2);
    // shiftZerostoEnd(sortedArr, sortedArrLength);
    // shiftZerostoEndAlt(sortedArr, sortedArrLength);

    // cout << "num 8 is at " << linearSearch(sortedArr, sortedArrLength, 8) << " index " << endl;
    // for (int i = 0; i < sortedArrLength; i++)
    // {
    //     cout << sortedArr[i] << " ";
    // }

    // int arr1[6] = {1, 1, 2, 3, 4, 5};
    // int arr2[6] = {2, 3, 4, 4, 5, 6};
    // int n1 = 6;
    // int n2 = 6;

    // vector<int> unionsResults;
    // unionsResults = findUnion(arr1, arr2, n1, n2);
    // for (int i = 0; i < unionsResults.size(); i++)
    // {
    //     cout << unionsResults[i] << " ";
    // }

    int A[8] = {1, 2, 2, 3, 3, 4, 5, 6};
    int B[7] = {2, 3, 3, 5, 6, 6, 7};
    int aN = 8;
    int bN = 7;

    vector<int> intersectionResults;
    intersectionResults = findIntersection(A, B, aN, bN);
    // intersectionResults = findIntersectionBrute(A, B, aN, bN);
    for (int i = 0; i < intersectionResults.size(); i++)
    {
        cout << intersectionResults[i] << " ";
    }

    return 0;
}