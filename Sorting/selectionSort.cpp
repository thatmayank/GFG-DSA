#include <bits/stdc++.h>
using namespace std;

int *selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mn_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mn_idx] > arr[j])
            {
                mn_idx = j;
            }
        }
        swap(arr[i], arr[mn_idx]);
    }
    return arr;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *ptr;
    ptr = selectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";
    return 0;
}