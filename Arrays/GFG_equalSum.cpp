// 23 10 1 5 10 10 5 6 4 7 7 10 1 7 6 5 1 7 9 4 2 7 2 8

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    string equilibrium(int *arr, int n)
    {
        int prefixSum[n]{}, suffixSum[n]{};
        prefixSum[0] = arr[0], suffixSum[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++)
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        for (int i = n - 2; i >= 0; i--)
            suffixSum[i] = suffixSum[i + 1] + arr[i];
        if (suffixSum[1] == 0 || prefixSum[n - 2] == 0)
            return "YES";
        for (int i = 1; i < n - 1; i++)
            if (prefixSum[i - 1] == suffixSum[i + 1])
                return "YES";
        return "NO";
    }
};

// { Driver Code Starts.

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Solution ob;
    auto ans = ob.equilibrium(a, n);
    cout << ans << "\n";
    return 0;
} // } Driver Code Ends