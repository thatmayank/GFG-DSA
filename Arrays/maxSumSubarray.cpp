#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int curr = arr[0], res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (curr < 0)
            curr = 0;
        curr += arr[i];
        res = max(res, curr);
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
    cout << maxSum(arr, n);
    return 0;
}