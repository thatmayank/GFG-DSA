#include <bits/stdc++.h>
using namespace std;

void searchMatrix(vector<vector<int>> &arr, int x)
{
    int i = 0, j = arr[0].size() - 1;
    while (i < arr.size() && j >= 0)
    {
        if (x == arr[i][j])
        {
            cout << i << " " << j;
            return;
        }
        else if (x < arr[i][j])
            j--;
        else
            i++;
    }
}

int main()
{
    vector<vector<int>> arr;
    int m{}, n{}, k{};
    cin >> m >> n >> k;
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
    searchMatrix(arr, k);

    return 0;
}