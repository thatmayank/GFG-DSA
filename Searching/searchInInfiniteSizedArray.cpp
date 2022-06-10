#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int searchInfArray(int arr[], int x)
{
    if (arr[0] == x)
        return 0;

    int i = 1;

    while (arr[i] < x)
        i = 2 * i;

    if (arr[i] == x)
        return i;

    return bSearch(arr, (i / 2) + 1, i - 1, x);
}

int main()
{
    int n{}, x{};
    cin >> n >> x;
    int arr[n]{0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << searchInfArray(arr, x);
    return 0;
}