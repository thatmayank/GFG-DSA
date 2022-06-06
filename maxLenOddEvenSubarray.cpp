#include <bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n)
{
    int curr = arr[0] % 2;
    int len = 1, res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 != curr)
        {
            len++;
            curr = arr[i] % 2;
        }
        else
        {
            res = max(res, len);
            len = 1;
        }
    }
    res = max(res, len);
    return res;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxSubarray(arr, n);
    return 0;
}