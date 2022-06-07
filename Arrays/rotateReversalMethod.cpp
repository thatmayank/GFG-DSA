#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int a, int b)
{
    while (a <= b)
    {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }
}
void rightRotateArray(int arr[], int n, int x)
{
    if (n <= 1)
        return;
    while (x > n)
        x = x - n;
    int rem = n - x;

    reverse(arr, 0, rem - 1);
    reverse(arr, rem, n - 1);
    reverse(arr, 0, n - 1);
}

void leftRotateArray(int arr[], int n, int x)
{
    if (n <= 1)
        return;
    while (x > n)
        x = x - n;
    int rem = n - x;

    reverse(arr, 0, x - 1);
    reverse(arr, x, n - 1);
    reverse(arr, 0, n - 1);
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
    string rotate;
    cin >> rotate;
    if (rotate == "left")
        leftRotateArray(arr, n, x);
    else
        rightRotateArray(arr, n, x);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}