#include <bits/stdc++.h>
using namespace std;

void boundaryTraversal(vector<vector<int>> &arr)
{
    int sz = arr.size();

    for (int j = 0; j < arr[0].size(); j++)
        cout << arr[0][j] << " ";

    for (int i = 1; i < sz - 1; i++)
        cout << arr[i][arr[i].size() - 1] << " ";

    if (arr.size() > 1)
        for (int j = arr[sz - 1].size() - 1; j >= 0; j--)
            cout << arr[sz - 1][j] << " ";

    if (arr[0].size() > 1)
        for (int i = sz - 2; i > 0; i--)
            cout << arr[i][0] << " ";
}

int main()
{
    vector<vector<int>> arr;
    int m{};
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        int n{};
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x{};
            cin >> x;
            v.push_back(x);
        }
        arr.push_back(v);
    }
    boundaryTraversal(arr);
    return 0;
}