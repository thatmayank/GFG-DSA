#include <bits/stdc++.h>
using namespace std;

void leftRotateArray(int arr[], int n, int x)
{
    if (n <= 1)
        return;
    while (x > n)
        x = x - n;
    int arx[x]{};
    for (int i = 0; i < x; i++)
        arx[i] = arr[i];
    int rem = n - x;
    for (int i = 0; i < rem; i++)
        arr[i] = arr[i + x];
    for (int i = 0; i < x; i++)
        arr[i + rem] = arx[i];
}

int main()
{
    int n; // size of array
    cin >> n;
    int arr[n]{};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x{}; // degree of left rotation
    cin >> x;
    leftRotateArray(arr, n, x);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}