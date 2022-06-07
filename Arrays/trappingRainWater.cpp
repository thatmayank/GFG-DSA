#include <bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)
{
    int res = 0;
    int lMax[n]{}, rMax[n]{};
    lMax[0] = arr[0], rMax[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
        lMax[i] = max(lMax[i - 1], arr[i]);
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(rMax[i + 1], arr[i]);
    for (int i = 1; i < n - 1; i++)
        res += min(lMax[i], rMax[i]) - arr[i];
    return res;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << getWater(arr, n);
    return 0;
}