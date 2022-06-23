#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr[i].size(); j++)
            swap(arr[i][j], arr[j][i]);
}

int main()
{
    vector<vector<int>> arr;
    int m{}, n{};
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int x{};
            cin >> x;
            v.push_back(x);
        }
        arr.push_back(v);
    }
    transposeMatrix(arr);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}