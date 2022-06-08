#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n, int l, int r)
{
    int prefixSum[n]{};
    prefixSum[0] = arr[0];

    for (int i = 0; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];

    if (l != 0)
        return prefixSum[r] - prefixSum[l - 1];
    else
        return prefixSum[r];
}

int main()
{
    int n{}, l{}, r{};
    cin >> n >> l >> r;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << getSum(arr, n, l, r);
    return 0;
}