#include <bits/stdc++.h>
using namespace std;

int longestSubarrayBinary(int arr[], int n)
{
    unordered_map<int, int> m;
    int sz{}, prefixSum{};

    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            arr[i] = -1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == 0)
            sz = i + 1;
        if (m.find(prefixSum) != m.end())
            sz = max(sz, i - m[prefixSum]);
        else
            m[prefixSum] = i;
    }
    return sz;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << longestSubarrayBinary(arr, n);
    return 0;
}