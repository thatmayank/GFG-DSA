#include <bits/stdc++.h>
using namespace std;

int *insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    ptr = insertionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";
    return 0;
}