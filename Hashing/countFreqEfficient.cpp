#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequencies(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    vector<int> res;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        res.push_back(it->first);
        res.push_back(it->second);
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 10, 20, 30};
    int n = 5;
    vector<int> result = countFrequencies(arr, n);
    for (int x : result)
        cout << x << " ";
    return 0;
}