#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int sz = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[sz - 1])
        {
            arr[sz] = arr[i];
            sz++;
        }
    }
    return sz;
}

int main()
{
    int n{}; // size of array
    cin >> n;
    int arr[n]{};
    for (int i{}; i < n; i++)
        cin >> arr[i];
    int size = removeDuplicates(arr, n);
    for (int i{}; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}