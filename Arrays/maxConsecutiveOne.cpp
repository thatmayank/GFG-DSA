#include <bits/stdc++.h>
using namespace std;

int countOne(int arr[], int n)
{
    int count{}, res{};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        else
        {
            res = max(res, count);
            count = 0;
        }
    }
    res = max(res, count);
    return res;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countOne(arr, n);
    return 0;
}