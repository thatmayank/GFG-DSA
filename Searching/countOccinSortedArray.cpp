#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                right = mid - 1;
        }
        else if (arr[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int lastOcc(int arr[], int n, int x)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                left = mid + 1;
        }
        else if (arr[mid] > x)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int countOcc(int arr[], int n, int x)
{
    int first = firstOcc(arr, n, x);
    int last = lastOcc(arr, n, x);
    if (first == -1)
        return 0;
    else
        return last - first + 1;
}

int main()
{
    int n{}, x{};
    cin >> n >> x;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countOcc(arr, n, x);
    return 0;
}