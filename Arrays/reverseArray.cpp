#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    cout << "Enter size of array: ";
    int n{};
    cin >> n;
    int arr[n]{};
    for (int i{}; i < n; i++)
        cin >> arr[i];
    reverseArray(arr, n);
    cout << "Array in reversed order: ";
    for (int i{}; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}