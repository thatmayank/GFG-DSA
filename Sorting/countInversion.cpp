// similar to mergeSort
#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1]{}, right[n2]{};

    for (int i = 0; i < n1; i++)
        left[i] = arr[i + low];
    for (int i = 0; i < n2; i++)
        right[i] = arr[i + mid + 1];

    int res{}, i{}, j{}, k = low;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
        {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }

    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    return res;
}

int mergeSort(int arr[], int left, int right)
{
    int res{};
    if (right > left)
    {
        int mid = left + (right - left) / 2;

        res += mergeSort(arr, left, mid);
        res += mergeSort(arr, mid + 1, right);
        res += merge(arr, left, mid, right);
    }
    return res;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << mergeSort(arr, 0, n - 1);
    return 0;
}