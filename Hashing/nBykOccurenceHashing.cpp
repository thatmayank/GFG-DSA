#include <bits/stdc++.h>
using namespace std;

vector<int> countOcc(vector<int> &arr, int n, int k)
{
    unordered_map<int, int> m;
    vector<int> res;
    for (auto x : arr)
        m[x]++;
    for (auto x : m)
        if (x.second > n / k)
            res.push_back(x.first);
    return res;
}

int main()
{
    int n{}, k{};
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> result;
    cin >> k;
    result = countOcc(arr, n, k);
    for (auto x : result)
        cout << x << " ";
    return 0;
}