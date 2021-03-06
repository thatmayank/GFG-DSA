#include <bits/stdc++.h>
using namespace std;

bool zeroSumSubarray(int arr[], int n)
{
    unordered_set<int> s;
    int prefixSum{};
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (s.find(prefixSum) != s.end() || prefixSum == 0)
            return true;
        else
        {
            s.insert(prefixSum);
        }
    }
    return false;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // int n = sizeof(arr)/sizeof(arr[0]);
    cout << boolalpha << zeroSumSubarray(arr, n);
    return 0;
}