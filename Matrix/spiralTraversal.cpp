#include <bits/stdc++.h>
using namespace std;

void spiralTraversal(vector<vector<int>> &arr)
{
    int top = 0, right = arr[0].size() - 1, bottom = arr.size() - 1, left = 0;

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
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
    spiralTraversal(arr);

    return 0;
}