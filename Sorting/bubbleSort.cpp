#include <bits/stdc++.h>
using namespace std;

int *bubbleSort(int *arr, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
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
    ptr = bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";
    return 0;
}