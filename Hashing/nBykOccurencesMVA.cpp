#include <bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm Appraoch T.C. = O(nk) A.S. = O(k)

vector<int> countOcc(vector<int> &arr, int n, int k)
{
    unordered_map<int, int> m;
    vector<int> res;
    for (auto x : arr)
    {
        if (m.find(x) != m.end())
            m[x]++;
        else if (m.size() < k - 1)
            m[x] = 1;
        else
        {
            for (auto e : m)
            {
                e.second--;
                if (e.second == 0)
                    m.erase(e.first);
            }
        }
    }

    for (auto x : m)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (x.first == arr[i])
                count++;
        }
        if (count > n / k)
            res.push_back(x.first);
    }

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