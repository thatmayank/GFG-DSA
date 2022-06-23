#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr[i].size(); j++)
            swap(arr[i][j], arr[j][i]);
}

void rotateMatrix(vector<vector<int>> &arr)
{
    transposeMatrix(arr);
    for (int i = 0; i < arr[0].size(); i++)
    {
        int j{}, k = arr.size() - 1;
        while (j < k)
            swap(arr[j++][i], arr[k--][i]);
    }
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
    rotateMatrix(arr);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}