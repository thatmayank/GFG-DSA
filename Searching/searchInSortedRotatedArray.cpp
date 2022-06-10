#include <bits/stdc++.h>
using namespace std;

int searchRotatedArray(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[left] < arr[mid])
        {
            if (x >= arr[left] && x < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n{}, x{};
    cin >> n >> x;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << searchRotatedArray(arr, n, x);
    return 0;
}