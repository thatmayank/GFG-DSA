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

int count1sOcc(int arr[], int n)
{
    int first = firstOcc(arr, n, 1);
    if (first == -1)
        return 0;
    else
        return n - first;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << count1sOcc(arr, n);
    return 0;
}