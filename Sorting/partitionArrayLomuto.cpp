#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int left, int right, int p)
{

    int sz = right - left + 1;

    int res[sz];
    int idx = 0;

    for (int i = left; i <= right; i++)
    {
        if (arr[i] <= arr[p] && i != p)
            res[idx++] = arr[i];
    }
    res[idx++] = arr[p];
    for (int i = left; i <= right; i++)
    {
        if (arr[i] > arr[p])
            res[idx++] = arr[i];
    }

    for (int i = left; i <= right; i++)
        arr[i] = res[i - left];
}

int main()
{
    int n{}, p{};
    cin >> n >> p;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    partition(arr, 0, n - 1, p);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}