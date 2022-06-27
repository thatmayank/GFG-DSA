#include <bits/stdc++.h>
using namespace std;

bool givenSumSubarray(int arr[], int n, int sum)
{
    unordered_set<int> s;
    int prefixSum{};
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (s.find(prefixSum - sum) != s.end() || prefixSum - sum == 0)
            return true;
        else
            s.insert(prefixSum);
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
    int sum{};
    cin >> sum;
    // int n = sizeof(arr)/sizeof(arr[0]);
    cout << boolalpha << givenSumSubarray(arr, n, sum);
    return 0;
}