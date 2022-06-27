#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefixSum{}, sz{};

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixSum == sum)
            sz = i + 1;
        if (m.find(prefixSum - sum) != m.end())
            sz = max(sz, i - m[prefixSum - sum]);
        if (m.find(prefixSum) == m.end())
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
    int sum{};
    cin >> sum;
    // int n = sizeof(arr)/sizeof(arr[0]);
    cout << longestSubarray(arr, n, sum);
    return 0;
}