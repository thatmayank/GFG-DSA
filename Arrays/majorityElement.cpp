#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    int res = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (res == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = arr[i];
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (res == arr[i])
            count++;
    if (count > n / 2)
        return res;
    else
        return -1;
}

int main()
{
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << majorityElement(arr, n);
    return 0;
}