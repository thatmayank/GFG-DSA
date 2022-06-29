#include <bits/stdc++.h>
using namespace std;

vector<int> distinctElement(int arr[], int n, int k)
{
    unordered_map<int, int> s;
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        s[arr[i]]++;
    }
    res.push_back(s.size());
    for (int i = k; i < n; i++)
    {
        s[arr[i]]++;
        if (s[arr[i - k]] > 1)
            s[arr[i - k]]--;
        else
            s.erase(arr[i - k]);
        res.push_back(s.size());
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
    int k{};
    cin >> k;
    vector<int> result;
    result = distinctElement(arr, n, k);
    for (auto x : result)
        cout << x << " ";
    return 0;
}