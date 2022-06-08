#include <bits/stdc++.h>
using namespace std;

int maxOcc(int L[], int R[], int n)
{
    vector<int> arr(1000, 0);
    for (int i = 0; i < n; i++)
    {
        arr[L[i]]++;
        arr[R[i] + 1]--;
    }

    int maxSum = arr[0], idx = 0;

    for (int i = 1; i < 1000; i++)
    {
        arr[i] = arr[i] + arr[i - 1];

        if (maxSum < arr[i])
        {
            maxSum = arr[i];
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int n{};
    cin >> n;
    int L[n]{}, R[n]{};
    for (int i = 0; i < n; i++)
        cin >> L[i];
    for (int i = 0; i < n; i++)
        cin >> R[i];
    cout << maxOcc(L, R, n);
    return 0;
}