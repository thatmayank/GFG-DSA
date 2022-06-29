#include <bits/stdc++.h>
using namespace std;

int longestSubsequence(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    int res = 1;
    for (auto x : s)
    {
        int curr = 1;
        if (s.find(x - 1) == s.end())
        {
            while (s.find(x + curr) != s.end())
                curr++;
            res = max(res, curr);
        }
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
    cout << longestSubsequence(arr, n);
    return 0;
}